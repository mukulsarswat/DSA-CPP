# C++ Pattern Programs

This repository provides a collection of various pattern programs in C++. Pattern programming is a fundamental topic that helps strengthen your logic, looping concepts, and control structures in programming.

Inspired by [GeeksforGeeks Pattern Programs](https://www.geeksforgeeks.org/c/pattern-programs-in-c/), this collection covers a variety of patterns including stars, numbers, alphabets, pyramids, diamonds, and more.

---

## Table of Contents

- [Introduction](#introduction)
- [Common Rules and Steps to Solve Patterns](#common-rules-and-steps-to-solve-patterns)
- [Types of Patterns](#types-of-patterns)
- [Sample Patterns](#sample-patterns)
- [How to Run](#how-to-run)
- [Contributing](#contributing)
- [References](#references)

---

## Introduction

Pattern programs are exercises that display a specific arrangement of characters, numbers, or symbols in a particular shape or sequence. They help improve logical thinking, nested loop control, and problem-solving skills in C++.

---

## Common Rules and Steps to Solve Patterns
## [Hand Written Short Note](https://photos.app.goo.gl/LuT9WEFJESXknDYk8)
Solving pattern problems can be simplified by following these general steps:

1. **Analyze the Pattern**:  
   - Observe how the pattern changes row by row and column by column.
   - Identify repeating elements and symmetry.

2. **Determine the Number of Rows and Columns**:  
   - Patterns usually depend on user input (n), denoting the number of rows (and sometimes columns).

3. **Choose the Loop Structure**:  
   - Use nested loops: the outer loop for rows, the inner loop(s) for columns or spaces/characters.

4. **Figure Out What to Print**:  
   - For each position, decide what should be printed (star, number, space, etc.).
   - Derive formulas or conditions based on row and column indices.

5. **Handle Spaces and Alignment**:  
   - Many patterns require proper alignment using spaces.
   - Use separate inner loops for printing spaces where necessary.

6. **Build Increment/Decrement Logic**:  
   - Identify if numbers/characters increment/decrement in each row/column.

7. **Test with Multiple Values**:  
   - Always test your code with different inputs to ensure scalability.

**Example Template:**
```cpp
for(int i = 1; i <= n; i++) {
    // Print leading spaces (if needed)
    for(int j = 1; j <= (n - i); j++) {
        cout << " ";
    }
    // Print pattern element
    for(int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << endl;
}
```

---

## Types of Patterns

Some common types of patterns include:

- **Star Patterns**: Square, pyramid, triangle, diamond, etc.
- **Number Patterns**: Increasing, decreasing, Pascal’s triangle, Floyd’s triangle, etc.
- **Alphabet Patterns**: Sequences with letters.
- **Mixed Patterns**: Combination of stars, numbers, and alphabets.

---

## Sample Patterns

### 1. Square Star Pattern
```
* * * *
* * * *
* * * *
* * * *
```
```cpp
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

### 2. Right-Angled Triangle Pattern
```
*
* *
* * *
* * * *
```
```cpp
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

### 3. Number Pyramid Pattern
```
   1
  2 2
 3 3 3
4 4 4 4
```
```cpp
for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n - i; j++) cout << " ";
    for(int j = 1; j <= i; j++) cout << i << " ";
    cout << endl;
}
```

### 4. Diamond Pattern
```
   *
  ***
 *****
*******
 *****
  ***
   *
```
```cpp
// Upper part
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
}
// Lower part
for (int i = n-1; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) cout << " ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
    cout << endl;
}
```

---

## How to Run

1. Clone the repository:
   ```
   git clone https://github.com/yourusername/cpp-pattern-programs.git
   ```
2. Navigate to the directory:
   ```
   cd cpp-pattern-programs
   ```
3. Compile any `.cpp` file using:
   ```
   g++ pattern_filename.cpp -o pattern
   ```
4. Run the executable:
   ```
   ./pattern
   ```

---

## Contributing

- Feel free to add new patterns or improve existing code.
- Follow the structure and add code comments for clarity.
- Submit a PR with a clear description of changes.

---

## References

- [GeeksforGeeks Pattern Programs in C++](https://www.geeksforgeeks.org/c/pattern-programs-in-c/)

---

Happy Coding!
