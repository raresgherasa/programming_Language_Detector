# FastDetect

FastDetect is a tool that figures out what programming language a file is written in. You give it a file, and it tells you whether it's Python, JavaScript, C++, or one of over 1,400 other languages.

It's written in C++ and runs very fast (under 2 milliseconds per file). It also comes with a desktop app so you can use it without the terminal.

## What It Can Do

- **Detect languages fast** — analyzes a file in about 1–2 ms
- **Supports 1,400+ languages** — programming, markup, and data formats, using GitHub's Linguist database
- **Handles tricky cases** — when multiple languages share the same file extension (like `.h` or `.mod`), it reads the file contents to figure out which one it really is
- **Two ways to use it:**
  - **Command line** — run it from the terminal, get a JSON answer
  - **Desktop app** — a GUI where you can pick files or scan whole folders

## How Detection Works

FastDetect tries several methods in order until it gets a confident answer:

1. **Filename** — some filenames are unique to a language (like `Makefile` or `Dockerfile`)
2. **Modeline** — checks if the file has an editor hint like `vim: ft=python`
3. **Shebang** — reads the first line for `#!/usr/bin/env python` or similar
4. **Extension** — maps `.py` to Python, `.js` to JavaScript, etc.
5. **Heuristics** — when the extension is shared by multiple languages, it scans the file for patterns and keywords to decide

## Requirements

- A **C++17** compiler (GCC or Clang)
- **CMake** 3.10 or newer
- **Python 3** (only needed for the GUI and the helper scripts)
- **GTK 3** (optional, for the native file picker on Linux)

## How to Build

```bash
mkdir build && cd build
cmake .. && make
mv FastDetect ..
```

This creates the `FastDetect` binary in the project root.

## How to Use

### Command Line

```bash
./FastDetect path/to/some/file.py
```

Output (JSON):

```json
{
  "language": "Python",
  "confidence": 1,
  "logic_path": "Extension Analysis"
}
```

### Desktop App

```bash
./app/FastDetectGUI
```

This opens a window where you can pick a file or scan an entire folder. It shows the detected language, confidence score, and a breakdown by language when scanning folders.

## Running Tests

There's a test script that checks accuracy against a set of 3,000+ sample files from 735 languages:

```bash
python3 scripts/test_against_samples.py
```

### Benchmark Results

- **Overall accuracy**: ~85% (full dataset across all 735 languages)
- **Top 50 languages accuracy**: ~93%
- **Average speed**: ~1.5 ms per file

## Regenerating Language Data

The language database is built from GitHub's Linguist YAML files (stored in `resources/`). If you update those files, you can regenerate the C++ data with:

```bash
python3 scripts/extract_linguist_data.py
```

This rewrites `src/GeneratedLanguages.cpp` and `include/GeneratedLanguages.h`, then you need to rebuild.

## Project Structure

```
├── app/                 Desktop GUI (Python + Tkinter)
├── include/             C++ header files
├── resources/           Language definitions from GitHub Linguist
├── scripts/             Data generation and testing scripts
├── src/                 C++ source code (detection engine)
├── tests/data/          Sample files for accuracy testing (735 languages)
├── CMakeLists.txt       Build configuration
└── FastDetect           Compiled binary (after building)
```

## License

This project was built for Infomatrix.
