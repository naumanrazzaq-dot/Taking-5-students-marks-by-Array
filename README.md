

# Student Marks Management System in C++

A structured C++ console application designed to manage, validate, and analyze academic marks for students across multiple subjects. The program handles data input, strictly enforces boundary validation, computes totals, and identifies performance extremes (highest and lowest scorers).

---

## 📋 Table of Contents
- [About the Project](#-about-the-project)
- [Key Features](#-key-features)
- [How it Works](#-how-it-works)
- [Expected Output](#-expected-output)
- [Getting Started](#-getting-started)
- [Technologies Used](#-technologies-used)

---

## 🔍 About the Project

This project focuses on fundamental core concepts in C++ and structured programming, making it an excellent resource for practicing:
* **Array Management:** Utilizing parallel arrays (`math`, `science`, `english`, and `total`) to align and manage related datasets across a shared index.
* **Robust Data Validation:** Implementing `do-while` loops to trap invalid console entries dynamically, ensuring data integrity before processing.
* **Min/Max Search Algorithms:** Evaluating running bounds within a dataset to isolate the maximum and minimum values along with their tracking identifiers.

---

## ✨ Key Features

* **Strict Input Bound Check:** Automatically rejects any entry outside the standard `0 - 100` marks range, keeping the user in a prompt loop until a valid score is supplied.
* **Automated Computations:** Concurrently processes matrix-like arithmetic to calculate individual total marks.
* **Dynamic Highlight Flags:** Identifies top performers directly inside the rendering loop alongside a clean final summary matrix.

---

## 🛠️ How it Works

The application logic follows three distinct operational phases:

1. **The Validation Block:**
   ```cpp
   do {
       cout << "Student " << i+1 << ": ";
       cin >> math[i];
       if (math[i] < 0 || math[i] > 100) {
           cout << "Invalid input! Marks must be between 0 and 100\n";
       }
   } while(math[i] < 0 || math[i] > 100);

```

2. **Summation Process:** Iterates through indices $0$ to $4$ to sync subject values into a dedicated total scoring storage array.
3. **Linear Scan Strategy:** Sets tracking baselines to index `0`, evaluating sequential positions against conditional checks to update the `highest` and `lowest` registers.

---

## 💻 Expected Output

When you run the program, the interaction looks like this:

```text
Enter Math marks for 5 students: 
Student 1: 85
Student 2: 105
Invalid input! Marks must be between 0 and 100
Student 2: 90
... [Truncated Input Process] ...

Total Marks: 
Student 1: 245
Student 2: 270 (Highest)
Student 3: 195
Student 4: 210
Student 5: 235

Student with Lowest Marks: Student 3 with 195 marks

All Marks Result: 
Student 1 - Math: 85, Science: 80, English: 80, Total: 245
Student 2 - Math: 90, Science: 95, English: 85, Total: 270
...

```

---

## 🚀 Getting Started

### Running in Code::Blocks

1. Open **Code::Blocks**.
2. Go to `File -> New -> Empty File` (or press `Ctrl+Shift+N`).
3. Paste the C++ source code and save the file as `main.cpp`.
4. Click the **Build and Run** gear-and-arrow icon (or press `F9`).

---

## 🧰 Technologies Used

* **Language:** C++
* **IDE:** Code::Blocks
* **Compiler:** GCC / G++ (MinGW toolchain)

---

*Feel free to star ⭐ this repository if you found it helpful!*

```

```
