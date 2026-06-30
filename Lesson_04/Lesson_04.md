<div align="center">

# 🌐 HTML Learning Portfolio

### _For Undergraduate Computer Science Studies_

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/mrnexora/)
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/mr-nexora/)

</div>

---

### 📝 Metadata & Credits

| Attribute               | Details                                                              |
| :---------------------- | :------------------------------------------------------------------- |
| **Author**              | T.M.S.U. Thennakoon (Sahan Udara)                                    |
| **Academic Context**    | Computer Science Undergraduate                                       |
| **Credits & Resources** | Inspired and learned via [W3Schools](https://www.w3schools.com/cpp/) |

> ⚠️ **Copyright Note**  
> Copyright (c) 2026 T.M.S.U. Thennakoon (Sahan Udara). All rights reserved.

---
# 📝 Lesson 04: C++ Comments

This lesson introduces documentation and code annotation rules in C++. Comments are non-executable statements used to explain code logic, make programs more readable, and temporarily disable code execution during debugging.

---

## 💡 Overview of Comments

In C++, comments are entirely ignored by the compiler. They serve as a critical tool for developers to leave notes or metadata within the source file without affecting program execution performance.

C++ supports two distinct styles of documentation comments:
1. **Single-Line Comments**
2. **Multi-Line Comments**

---

## 1. Single-Line Comments

Single-line comments begin with two forward slashes (`//`). Any text or instructions written following `//` on that specific line will not be processed by the compiler.

### Code Example:


```CPP
        int main () {

        // This is a Single-Line Coment

        return 0;
    }
```
## Multi-Line Comments
Multi-line comments start with a forward slash and an asterisk (/*) and close with an asterisk and a forward slash (*/). Any content placed between these boundary blocks will be skipped during compilation, allowing annotations to stretch seamlessly across multiple lines.

### Code Example:
```CPP
    int main () {

        /* 
        This 
        is 
        a 
        Multi-Line 
        Coment 
        */

        return 0;
    }
```