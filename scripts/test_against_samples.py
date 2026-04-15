import os
import subprocess
import json
import time

FAST_DETECT = './FastDetect'
SAMPLES_DIR = './tests/data'

def test_samples():
    if not os.path.exists(FAST_DETECT):
        print("Error: FastDetect not built")
        return

    total = 0
    passed = 0
    failures = []
    start_time = time.time()

    for lang in os.listdir(SAMPLES_DIR):
        lang_path = os.path.join(SAMPLES_DIR, lang)
        if not os.path.isdir(lang_path): continue
        
        for f in os.listdir(lang_path):
            file_path = os.path.join(lang_path, f)
            if os.path.isdir(file_path) or f == 'filenames': continue
            
            try:
                result = subprocess.run([FAST_DETECT, file_path], capture_output=True, text=True)
                if result.returncode != 0: continue
                
                data = json.loads(result.stdout)
                detected = data.get('language')
                
                total += 1
                if detected == lang:
                    passed += 1
                else:
                    failures.append(f"{file_path} | Expected: {lang} | Detected: {detected}")
            except Exception as e:
                print(f"Error testing {file_path}: {e}")

    duration = time.time() - start_time
    print(f"Tested {total} files.")
    print(f"Accuracy: {(passed/total*100):.2f}% ({passed}/{total})" if total > 0 else "No files tested.")
    print(f"Total time: {duration:.2f}s")
    if total > 0:
        print(f"Avg time per file: {(duration/total*1000):.2f}ms")

    if failures:
        print("\nSome failures (first 10):")
        for fail in failures[:10]:
            print(fail)

if __name__ == "__main__":
    test_samples()
