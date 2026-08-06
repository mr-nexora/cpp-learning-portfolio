<div align="center">

# 🗂️ C++ Core Architecture & Learning Portfolio
### *Undergraduate Computer Science Studies & Fundamental Engineering Lab*

[![C++ Version](https://img.shields.io/badge/C%2B%2B-11%2F14%2F17%2F20-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Platform Support](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-000000?style=for-the-badge)](https://gcc.gnu.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](https://opensource.org/licenses/MIT)

<p align="center">
  <a href="#-syllable-curriculum-matrix">Curriculum</a> •
  <a href="#-core-modules-breakdown">Modules</a> •
  <a href="#%EF%B8%F0-calculator-mini-project">Mini-Project</a> •
  <a href="#-compilation--local-setup">Setup Guide</a>
</p>

---
</div>
## 📑 Executive Overview

Welcome to my **C++ Fundamentals Learning Repository**. This structured portfolio acts as a digital logbook documenting foundational computing abstractions, language syntax patterns, performance limits, and modern compilation setups implemented during my Computer Science undergraduate curriculum tracking. 

It covers primitive variable assignments, memory layout configurations, relational algorithms, bitwise logic pipelines, dynamic string stream mutations, and control structures.

---

## 🗺️ Syllable Curriculum Matrix

| Module | Core Technical Focus | Implementation Highlights | Documentation Logs |
| :---: | :--- | :--- | :---: |
| **07** | **Simple Calculator Mini-Project** | Isolated basic operators (`+`, `-`, `*`, `/`, `%`) | [View Sections](#%EF%B8%F0-calculator-mini-project) |
| **08** | **Primitive Data Types & Memory** | Value limits, ASCII encoding, scientific flags, `auto` | [View Sections](#-primitive-data-types--precision-bounds) |
| **09** | **C++ Operators & Bitwise Precedence** | Pre/Post operations, bitwise assignments, associativity | [View Sections](#-operators--algebraic-precedence) |
| **10** | **Advanced Strings Processing** | Mutation methods (`substr`, `replace`), `getline` logic | [View Sections](#-string-manipulation--stream-processing) |
| **11** | **Mathematical Functions Library** | Continuous rounding, logarithm calculations, radians | [View Sections](#-cmath-library--algorithmic-helpers) |
| **12** | **Booleans & Output Stream Manipulation** | Binary conversion states, `boolalpha` text-switches | [View Sections](#-boolean-states--stream-formatting) |
| **13** | **Conditional Control Branching** | Sequential nested paths, multi-conditional bounds, ternary | [View Sections](#-conditional-control-branching-ifelse) |
| **14** | **Switch Control Platforms** | Switch jump-tables, fall-through mechanics, `default` errors | [View Sections](#-switch-case-execution-platforms) |

---

## 📂 Core Modules Breakdown

### 🧮 Calculator Mini-Project

A comprehensive multi-file arithmetic verification tracking suite that isolates functional behaviors of fundamental operators while evaluating constraints like **Integer Division Truncation**.

* **Addition (`+`)**: Resolves sum of factors. `[Source: test1.cpp]`
* **Subtraction (`-`)**: Computes difference boundaries. `[Source: test2.cpp]`
* **Multiplication (`*`)**: Handles multiplicative scalar logic. `[Source: test3.cpp]`
* **Division (`/`)**: Evaluates variable processing. (Truncates float remainders on raw integers). `[Source: test4.cpp]`
* **Modulus (`%`)**: Returns remainder calculations ($dividend \pmod{divisor}$). `[Source: test5.cpp]`

📁 *Visual Assets: Linked directly under path root: `img/img1.jpg` through `img/img5.jpg`.*

---

### 🔢 Primitive Data Types & Precision Bounds

Explores data architecture rules in C++, verifying exactly how bit blocks are reserved inside physical memory stacks.

* **Memory Allocations**: Integer blocks (`int`: 4 bytes), Single Precision (`float`: 4 bytes), Double Precision (`double`: 8 bytes).
* **Scientific Exponent Notations**: Utilizing lower/upper configuration terms (`35e3` $\rightarrow 35000$, `12E4` $\rightarrow 120000$).
* **ASCII Alphanumeric Mapping**: Translating raw decimals (`65`, `66`, `67`) directly into explicit symbol patterns (`'A'`, `'B'`, `'C'`).
* **Automatic Type Inference**: Safe compiler type deducing using modern **`auto`** parameters safely at build time.

📁 *Visual Assets: Linked directly under path root: `img/img1.jpg` through `img/img6.jpg`.*

---

### ⚙️ Operators & Algebraic Precedence

Detailed testing of logical transformations, processing sequences, and bit modification mechanisms.

* **Increment/Decrement Mutators**: Breaking down technical evaluation differences between **Pre** and **Post** variables (`++x` vs `y++`).
* **Bitwise Shorthand Adjustments**: Injecting memory masks safely using compound assignments (`&=`, `|=`, `^=`, `<<=`, `>>=`).
* **Precedence & Associativity Processing**: Tracking compound math resolving mechanics safely using strict left-to-right calculation properties over shared hierarchy parameters.

📁 *Visual Assets: Linked directly under path root: `img/img1.1.jpg` through `img/img5.4.jpg`.*

---

### 🔤 String Manipulation & Stream Processing

Advanced textual object tracking, memory sequence mutations, and alternative runtime terminal interaction streams.

* **Capacity Queries**: Tracking buffer allocations using standard length systems (`size()` / `length()` / `empty()`).
* **Sub-Sequence Selectors**: Slicing specific portions or deleting tracking segments (`substr()`, `erase()`, `replace()`).
* **Buffer Injections**: Pushing single characters or adding raw sequences safely (`push_back()`, `pop_back()`, `append()`).
* **Whitespaces Tokenization Fix**: Bypassing standard stream line-cuts caused by standard extraction (`cin >>`) by introducing unified string block extractions via **`getline(cin, stringVar)`**.

📁 *Visual Assets: Linked directly under path root: `img/img1.jpg` through `img/img15.jpg`.*

---

### 🔬 `<cmath>` Library & Algorithmic Helpers

Leverages computational parameters mapped across scientific formulas, trigonometric waves, and precision shifting blocks.

* **Roots & Powers**: Evaluating formulas via standard operations (`sqrt()`, `cbrt()`, `pow()`, `abs()`, `fmod()`).
* **Rounding Modulations**: Direct integer estimations using structured boundaries (`round()`, `ceil()`, `floor()`).
* **Logarithmic Frameworks**: Resolving scaling factors across custom base indicators (`log()`, `log10()`, `log2()`).
* **Trigonometric Wave Processing**: Continuous tracking over geometric inputs (`sin()`, `cos()`, `tan()`). *Note: Inputs require strict conversion to radians.*

📁 *Visual Assets: Linked directly under path root: `img/img1.jpg` through `img/img17.jpg`.*

---

### ⚖️ Boolean States & Stream Formatting

Explores absolute states of truth logic evaluation monitoring inside active console applications.

* **Raw Numeric Injections**: Default data mapping output streams returning `1` for true conditions and `0` for false instances.
* **Alphanumeric Conversions**: Introducing **`boolalpha`** flags into the active stream to print readable `"true"` / `"false"` string literals.
* **Stream Resets**: Using the reverse state mutator **`noboolalpha`** to switch back to baseline numeric binary options safely.

📁 *Visual Assets: Linked directly under path root: `img/img1.jpg` through `img/img5.jpg`.*

---

### 🔀 Conditional Control Branching (`If...Else`)

Managing logical flow splits dynamically across multi-stage criteria matching workflows.

* **Relational Testing Layers**: Simple runtime filters parsing equations via standard evaluation tracks (`if`, `else`, `else if`).
* **Ternary Single-Line Inline Evaluators**: Condensing control structures down to fast execution formulas (`(condition) ? true : false`).
* **Nested Conditional Layers**: Building deep evaluation tracking blocks to handle complex dependent checking operations safely.
* **Logical Operators Integration**: Combining complex filtering arrays into single evaluations using standard conditional chains (`&&`, `||`, `!`).

📁 *Visual Assets: Linked directly under path root: `img/img1.jpg` through `img/img12.jpg`.*

---

### 🎛️ Switch-Case Execution Platforms

Optimized control mapping frameworks built to replace extensive condition evaluation pipelines cleanly.

* **Jump-Table Optimizations**: Fast value routing structures matching strictly defined integer constants.
* **Fall-Through Mitigation**: Enforcing structural isolation boundaries at the end of every case sequence using the **`break`** keyword.
* **Universal Runtime Catchers**: Isolating unmatched inputs or execution errors safely by initializing centralized **`default`** fallback handlers.

📁 *Visual Assets: Linked directly under path root: `img/img1.jpg` saha `img/img2.jpg`.*

---

## 🚀 Compilation & Local Setup

### 📋 Prerequisites
Ensure a modern C++ compiler toolchain is installed locally on your system:
* **GCC / G++ Compiler** (v11.0 or higher recommended)
* **Git** version control system tracking tool

### 🖥️ Local Installation
```bash
# Clone this academic portfolio repository locally
git clone [https://github.com/YOUR_GITHUB_USERNAME/cpp-learning-portfolio.git](https://github.com/YOUR_GITHUB_USERNAME/cpp-learning-portfolio.git)

# Navigate directly into the local repository directory
cd cpp-learning-portfolio

# Compile any isolated target module example (e.g., Lesson 10 - test15.cpp) via terminal
g++ -std=c++17 Lesson10_Strings/test15.cpp -o string_demo

# Execute the built application binary file
./string_demo
