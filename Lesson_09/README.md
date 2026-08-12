<div align="center">

# 🚀 C++ Learning Portfolio

### Building My Full Stack Development Journey, One Lesson at a Time.

<img src="https://img.shields.io/badge/Status-In%20Progress-00C853?style=for-the-badge" />
<img src="https://img.shields.io/badge/Lessons-15%2B-2196F3?style=for-the-badge" />
<img src="https://img.shields.io/badge/Language-CPP-E34F26?style=for-the-badge&logo=html5&logoColor=white" />

<br><br>

<a href="https://github.com/mr-nexora">
<img src="https://img.shields.io/badge/GitHub-mr--nexora-181717?style=for-the-badge&logo=github&logoColor=white"/>
</a>

<a href="https://www.linkedin.com/in/mrnexora/">
<img src="https://img.shields.io/badge/LinkedIn-Sahan%20Udara-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>

<a href="https://mr-nexora.github.io/mr-nexora-personal-portfolio/">
<img src="https://img.shields.io/badge/Portfolio-Visit%20Website-6C63FF?style=for-the-badge&logo=googlechrome&logoColor=white"/>
</a>

</div>

---

# 👋 Welcome

Welcome to my **C++ Learning Repository**.

This repository documents my complete learning journey in C++ as part of my Full Stack Development roadmap. Every lesson includes well-organized source code, explanations, screenshots, practice exercises, and mini projects to strengthen my programming, problem-solving, and object-oriented programming skills.

---

# 📂 Repository Overview

| 📌 Information | Details |
|:---------------|:--------|
| 👨‍💻 Author | **T.M.S.U. Thennakoon (Sahan Udara)** |
| 🎓 Program | Computer Science Undergraduate |
| 💻 Technology | C++ |
| 📚 Learning Method | Daily Lessons & Hands-on Practice |
| 🎯 Goal | Become a Professional Full Stack Developer |
| 📅 Repository Started | 2026 |

---

# ✨ What's Inside

- 📖 Structured Lessons
- 💻 Source Code
- 📷 Output Screenshots
- 📝 Markdown Notes
- 🚀 Mini Projects
- 📚 Practice Exercises
- 📈 Continuous Progress Updates

---

# 🌍 Connect With Me

<div align="center">

<a href="https://github.com/mr-nexora">
<img src="https://img.shields.io/badge/GitHub-Follow-181717?style=for-the-badge&logo=github"/>
</a>

<a href="https://www.linkedin.com/in/mrnexora/">
<img src="https://img.shields.io/badge/LinkedIn-Connect-0077B5?style=for-the-badge&logo=linkedin"/>
</a>

<a href="https://mr-nexora.github.io/mr-nexora-personal-portfolio/">
<img src="https://img.shields.io/badge/Portfolio-Visit-6C63FF?style=for-the-badge&logo=googlechrome"/>
</a>

</div>

---

# 📚 Learning Resources

This repository is built through continuous practice using educational resources such as:

- [W3Schools](https://www.w3schools.com/cpp/) 

---

# ⚖️ Copyright

> **© 2026 T.M.S.U. Thennakoon (Sahan Udara). All Rights Reserved.**
>
> This repository has been created for educational, portfolio, and personal learning purposes.
>
> You are welcome to explore this repository, learn from the code, and use the examples as a reference for your own learning and personal projects.
>If this repository helps you in your learning journey, a star ⭐ or proper credit is always appreciated.

---
<div align="center">

⭐ If you find this repository useful, consider giving it a Star.

Happy Coding! 🚀

</div>

---

# ⚙️ Lesson 09: C++ Operators & Precedence Rules

This module breaks down data execution operations in C++. We explore standard arithmetic, compound assignments, bitwise shifting masks, comparisons tracking boolean evaluations, logical branching operators, and compiler precedence rules.

---

## ➕ 1. Arithmetic Operators

Arithmetic operators perform standard mathematical calculations on numerical operands.

### 🔹 Core Math Operations (`+`, `-`, `*`, `/`, `%`

### Addition

```CPP
    // test1.cpp

int x = 10, y = 5;
cout << "Addition = " << x + y;
```

## ![img](img/img1.1.jpg)

---

### Subtraction

```CPP
    // test2.cpp
int x = 10, y = 5;
cout << "Subtraction = " << x - y;
```

## ![img](img/img1.2.jpg)

---

### Multiplication

```CPP
    // test3.cpp
int x = 10, y = 5;
cout << "Multiplication = " << x * y;
```

## ![img](img/img1.3.jpg)

---

### Division

```CPP
    // test4.cpp
int x = 10, y = 5;
cout << "Division = " << x / y;
```

## ![img](img/img1.4.jpg)

---

### Modulus

```CPP
    // test5.cpp
int x = 10, y = 5;
cout << "Modulus = " << x % y;
```

## ![img](img/img1.5.jpg)

---

### Increment

```CPP
    // test6.cpp
int x = 5;
int y = 5;

// Pre-Increment (++a)
cout << "Pre-Increment (++x) Value: " << ++x << endl;
cout << "Now value of x: " << x << endl << endl;

// Post-Increment (y++)
cout << "Post-Increment (y++) value: " << y++ << endl;
cout << "Now value of y: " << y << endl;
```

## ![img](img/img1.6.jpg)

---

### Decrement

```CPP
    // test7.cpp
int x = 10;
int y = 10;

// Pre-Decrement (--x)
cout << "Pre-Decrement (--x) value: " << --x << endl;
cout << "Now x Value: " << x << endl << endl;

// Post-Decrement (y--)
cout << "Post-Decrement (y--) value: " << y-- << endl;
cout << "Now y value: " << y << endl;
```

## ![img](img/img1.7.jpg)

---

## Assignment operators
Assignment operators assign values to variables. Compound operators combine an arithmetic operation with an assignment shorthand.
### = Operator

```CPP
    int x = 10;
    cout << "x = " << x << endl; // x = 10
    cout << "\n\n\n";
```

## ![img](img/img2.1.jpg)

---

### += Operator

```CPP
    int x = 10;
    x += 6;                            // x = 10 + 6
    cout << "x += 6 -> " << x << endl; // x = 16
```

## ![img](img/img2.2.jpg)

---

### -= Operator

```CPP
    int x = 16;
    x -= 4;                            // x = 16 - 4
    cout << "x -= 4 -> " << x << endl; // x = 12

```

## ![img](img/img2.3.jpg)

---

### \*= Operator

```CPP
    int x = 12;
    x *= 2;                            // x = 12 * 2
    cout << "x *= 2 -> " << x << endl; // x = 24

```

## ![img](img/img2.4.jpg)

---

### /= Operator

```CPP
    int x = 24;
    x /= 3;                            // x = 24 / 3
    cout << "x /= 3 -> " << x << endl; // x = 8

```

## ![img](img/img2.5.jpg)

---

### %= Operator

```CPP
    int x = 8;
    x %= 5;                            // x = 8 % 5
    cout << "x %= 5 -> " << x << endl; // x = 3

```

## ![img](img/img2.6.jpg)

---

### Bitwise Assignment Operators
These perform compound assignments directly on the binary representation of integers.
### &= Operator

```CPP
    int x = 3;
    x &= 7;                            // 0011 & 0111
    cout << "x &= 7 -> " << x << endl; // x = 3

```

## ![img](img/img2.7.jpg)

---

### |= Operator

```CPP
    int x = 3;
    x |= 4;                            // 0011 | 0100
    cout << "x |= 4 -> " << x << endl; // x = 7 (Binary: 0111)

```

## ![img](img/img2.8.jpg)

---

### ^= Operator

```CPP
    int x = 7;
    x ^= 2;                            // 0111 ^ 0010
    cout << "x ^= 2 -> " << x << endl; // x = 5 (Binary: 0101)

```

## ![img](img/img2.9.jpg)

---

### >>= Operator

```CPP
    int x = 5;
    x >>= 1;                            // Shifting the value 0101 to the right by 1
    cout << "x >>= 1 -> " << x << endl; // x = 2 (Binary: 0010)

```

## ![img](img/img2.10.jpg)

---

### <<= Operator

```CPP
    int x = 2;
    x <<= 3;                            // Shifting the value 0010 to the left by 3
    cout << "x <<= 3 -> " << x << endl; // x = 16 (Binary: 10000)
```

## ![img](img/img2.11.jpg)

---

## Comparison operators
Comparison operators compare two values and return a boolean output: 1 (True) or 0 (False).
### Equal to x == y

```CPP
        int x = 5;
        int y = 10;
        cout << (x == y) << endl; // Output: 0 (False)
        cout << "\n\n";
```

## ![img](img/img3.1.jpg)

---

### Not equal x != y

```CPP
        int x = 5;
        int y = 10;
        cout << (x != y) << endl; // Output: 1 (True)
        cout << "\n\n";
```

## ![img](img/img3.2.jpg)

---

### Greater than x > y

```CPP
        int x = 5;
        int y = 10;
        cout << (x > y) << endl; // Output: 0 (False)
        cout << "\n\n";
```

## ![img](img/img3.3.jpg)

---

### Less than x < y

```CPP
        int x = 5;
        int y = 10;
        cout << (x < y) << endl; // Output: 1 (True)
        cout << "\n\n";
```

## ![img](img/img3.4.jpg)

---

### Greater than or equal to x >= y

```CPP
        int x = 5;
        int y = 10;
        cout << (x >= y) << endl; // Output: 0 (False)
        cout << "\n\n";
```

## ![img](img/img3.5.jpg)

---

### Less than or equal to x <= y

```CPP
        int x = 5;
        int y = 10;
        cout << (x <= y) << endl; // Output: 1 (True)
```

## ![img](img/img3.6.jpg)

---

## Logical operators
Logical operators are used to determine the logic between variables or values, commonly used to combine multiple conditions.
### Logical and

```CPP
    int x = 5;

    int p = x > 4 && x <10 ;
    cout << "Output = " << p <<endl;
```

## ![img](img/img4.1.jpg)

---

### Logical or

```CPP
    int x = 5;

    int q = x > 4 || x <10 ;
    cout << "Output = " << q <<endl;

```

## ![img](img/img4.2.jpg)

---

### Logical not

```CPP
    int x = 5;

    int r = !(x > 4 && x <10) ;
    cout << "Output = " << r <<endl;
```

## ![img](img/img4.3.jpg)

---

## Bitwise operators

```CPP
    // Example 1: Multiplication has higher precedence than addition
    int result1 = 5 + 3 * 2;
    // Step 1: 3 * 2 = 6
    // Step 2: 5 + 6 = 11
    cout << "Example 1 (5 + 3 * 2) = " << result1 << endl;
```

## ![img](img/img5.1.jpg)

---

```CPP
    // Example 2: Parentheses () have the highest precedence
    int result2 = (5 + 3) * 2;
    // Step 1: (5 + 3) = 8
    // Step 2: 8 * 2 = 16
    cout << "Example 2 ((5 + 3) * 2) = " << result2 << endl;
```

## ![img](img/img5.2.jpg)

---

```CPP
    // Example 3: Same precedence operators execute from Left-to-Right (Associativity)
    int result3 = 20 / 4 * 2;
    // Step 1: 20 / 4 = 5
    // Step 2: 5 * 2 = 10
    cout << "Example 3 (20 / 4 * 2) = " << result3 << endl;
```

## ![img](img/img5.3.jpg)

---

```CPP
    // Example 4: Complex expression combining multiple rules
    int result4 = 10 + 40 / (2 * 2) - 3;
    // Step 1 (Parentheses): 2 * 2 = 4 -> (10 + 40 / 4 - 3)
    // Step 2 (Division): 40 / 4 = 10 -> (10 + 10 - 3)
    // Step 3 (Left-to-Right): 10 + 10 = 20 -> (20 - 3)
    // Step 4 (Subtraction): 20 - 3 = 17
    cout << "Example 4 (10 + 40 / (2 * 2) - 3) = " << result4 << endl;
```

## ![img](img/img5.4.jpg)

---
