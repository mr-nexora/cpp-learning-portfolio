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

# 🧮 Lesson 11: C++ Math Operators & `<cmath>` Library

This lesson explores algorithmic computation properties in C++. We cover basic comparison helper features (`max`/`min`) alongside complex mathematical operations unlocked via the standard standard library headers.

---

## 🔍 1. Basic Comparisons: `max()` and `min()`

The `max()` and `min()` functions are available in the standard algorithm/utility pool by default. They allow you to easily find the highest or lowest values between two compared terms.

### 🔺 Maximum Value
```CPP
    // test1.cpp
    int x = 5, y =10;

    int MAX = max(x,y);
    cout << "Max Value: " << MAX;
```

## ![img](img/img1.jpg)

---

## 🔻 Minimum Value

```CPP
    // test1.cpp
    int x = 5, y =10;

    int MIN = min(x,y);
    cout << "Min Value: " << MIN;
```

## ![img](img/img2.jpg)

---

## C++ <cmath> Library
To access advanced algebraic, trigonometric, and rounding structures, you must include the standard header package: #include <cmath>.

## Math Functions

### Basic & Power Operations

#### sqrt: Finds the square root of a number

```CPP
    cout << "sqrt value: " << sqrt(25); // Output: 5
```

## ![img](img/img3.jpg)

---

#### cbrt: Finds the cube root of a number

```CPP
    cout << "cbrt value: " << cbrt(27); // Output: 3
```

## ![img](img/img4.jpg)

---

#### pow: Raises the base to the power of exponent (2 cubed)

```CPP
    cout << "pow value: " << pow(2, 3); // Output: 8
```

## ![img](img/img5.jpg)

---

#### abs: Converts negative numbers into positive numbers

```CPP
    cout << "abs value: " << abs(-15); // Output: 15
```

## ![img](img/img6.jpg)

---

#### fmod: Finds the remainder of a decimal division (5.5 / 2)

```CPP
    cout << "fmod value: " << fmod(5.5, 2.0); // Output: 1.5
```

## ![img](img/img7.jpg)

---

### Rounding & Estimation

#### round: Rounds to the nearest whole number

```CPP
    cout << "round value: " << round(4.6) << endl; // Output: 5
    cout << "round value: " << round(4.3);         // Output: 4
```

## ![img](img/img8.jpg)

---

#### ceil: Always rounds upwards to the next integer

```CPP
    cout << "ceil value: " << ceil(4.1); // Output: 5
```

## ![img](img/img9.jpg)

---

#### floor: Always rounds downwards to the previous integer

```CPP
    cout << "floor value: " << floor(4.9); // Output: 4
```

## ![img](img/img10.jpg)

---

### Logarithmic & Exponential

#### exp: Calculates e raised to the power of x (e^1)

```CPP
    cout << "exp value: " << exp(1); // Output: 2.71828
```

## ![img](img/img11.jpg)

---

#### log: Calculates the natural logarithm (base-e)

```CPP
    cout << "log value: " << log(2.71828); // Output: 1
```

## ![img](img/img12.jpg)

---

#### log10: Calculates the common logarithm (base-10)

```CPP
    cout << "log value: " << log10(100); // Output: 2
```

## ![img](img/img13.jpg)

---

#### log2: Calculates the binary logarithm (base-2)

```CPP
    cout << "log value: " << log2(8); // Output: 3
```

## ![img](img/img14.jpg)

---

### Trigonometric Functions

#### sin: Calculates the sine of an angle (input must be in radians)

```CPP
    cout << "sin value: " << sin(1.5708); // Output: 1 (approx for 90 degrees)
```

## ![img](img/img15.jpg)

---

#### cos: Calculates the cosine of an angle in radians

```CPP
    cout << "cos value: " << cos(0); // Output: 1
```

## ![img](img/img16.jpg)

---

#### tan: Calculates the tangent of an angle in radians

```CPP
    cout << "tan value: " << tan(0.7854); // Output: 1 (approx for 45 degrees)
```

## ![img](img/img17.jpg)
