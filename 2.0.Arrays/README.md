# 📁 Arrays : Basic Concept

## 📌 Overview
Arrays are one of the most fundamental data structures in computer science. They provide a way to store elements of the same type in contiguous memory locations, allowing for efficient indexing and iteration.

This README covers the basics of arrays, common operations, implementation strategies, and practice problems to build a strong foundation in DSA.
---

## 🧠 Introduction
An **array** is a linear data structure that holds elements in a fixed-size container. Each element can be accessed directly using its index.

### 🔹 Characteristics
- Fixed size (in static arrays)
- Homogeneous elements
- Zero-based indexing (in most languages)
- Stored in contiguous memory

---

## 🛠️ Array Operations


| Operation        | Description                                      | Time Complexity |
|------------------|--------------------------------------------------|------------------|
| Access           | Retrieve element at index `i`                   | O(1)             |
| Update           | Modify element at index `i`                     | O(1)             |
| Traversal        | Iterate through all elements                    | O(n)             |
| Insertion (end)  | Add element at the end (dynamic arrays)         | O(1) amortized   |
| Insertion (middle)| Shift elements and insert                      | O(n)             |
| Deletion         | Remove element and shift                        | O(n)             |
| Search (linear)  | Find element by value                           | O(n)             |
| Search (binary)  | On sorted array only                            | O(log n)         |

---

🔹 Imagine an array:  
`[10, 20, 30, 40, 50]`

Each element is stored in a box, and each box has an index below it:

```
+-----+-----+-----+-----+-----+
|  10 |  20 |  30 |  40 |  50 |
+-----+-----+-----+-----+-----+
  i=0   i=1   i=2   i=3   i=4
```

📍 Key Concepts:
- Each value is stored at a specific index.
- Indexing starts from 0.
- Memory is contiguous—meaning each element is placed right next to the previous one.

This layout helps explain how operations like access (`arr[2] → 30`) or updates (`arr[3] = 99`) work efficiently.

---

## ⏱️ Time and Space Complexity

- **Best case**: O(1) for access/update
- **Worst case**: O(n) for insertion/deletion/search
- **Space**: O(n) for storing `n` elements

---

## 💡 Common Interview Problems

| Problem Name                     | Concept Tested         |
|----------------------------------|------------------------|
| Two Sum                          | Hashing, traversal     |
| Maximum Subarray (Kadane’s)      | Dynamic programming    |
| Move Zeroes                      | In-place manipulation  |
| Rotate Array                     | Reversal, modular math |
| Merge Sorted Arrays              | Two-pointer technique  |
| Find Duplicate Number            | Floyd’s cycle detection|

---


## 🧪 Practice Resources

- [LeetCode Arrays](https://leetcode.com/tag/array/)
- [GeeksforGeeks Array Problems](https://www.geeksforgeeks.org/array-data-structure/)
- [Hackerrank Arrays](https://www.hackerrank.com/domains/tutorials/10-days-of-javascript)

---



## 🤝 Contributing

Feel free to fork this repo, suggest improvements, or add new problems and solutions. Clear documentation and beginner-friendly explanations are highly encouraged!
