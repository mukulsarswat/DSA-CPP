# 🔑 [Basic Hashing in C++](https://takeuforward.org/hashing/hashing-maps-time-complexity-collisions-division-rule-of-hashing-strivers-a2z-dsa-course/)
 
## 📖 Introduction
**Hashing** is a technique used to **map data to a fixed-size structure** for fast retrieval.  
In **C++**, hashing is widely used in competitive programming and real-world applications such as **frequency counting, duplicate detection, and lookups**.

---

## ⚡ What is Hashing?
- Hashing uses a **hash function** to convert keys into indexes of a hash table.
- Provides **O(1)** average-time complexity for:
  - **Insertion**
  - **Deletion**
  - **Search**
- Makes it highly efficient compared to linear or binary search.

---

## 🎯 Applications of Hashing
✅ Counting frequencies of elements  
✅ Checking duplicates efficiently  
✅ Implementing `unordered_map`, `unordered_set`  
✅ Cryptography & password storage (advanced use)  

---


## 💻 Implementation in C++

### 📌 Example 1: Counting Frequencies in an Array
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 4, 2};
    unordered_map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    cout << "Frequencies:\n";
    for (auto &p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}


