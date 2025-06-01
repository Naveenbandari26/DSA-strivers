# 🔢 Sorting Algorithms Visualizer

This project demonstrates core **comparison-based sorting algorithms** — **Bubble Sort**, **Selection Sort**, **Insertion Sort**, **Merge Sort**, and **Quick Sort** — implemented using clean and beginner-friendly C++ code. This repository is ideal for those who are starting out with sorting techniques and want to understand the trade-offs in terms of performance, stability, and in-place sorting.

---

## 📘 What is Sorting?

Sorting is the process of arranging data in a particular format — typically in ascending or descending order. Efficient sorting improves the performance of other algorithms (like search, merge, or binary search) and is a fundamental concept in computer science.

---

## ✨ Features

- ✅ Clean and modular code
- ✅ In-place sorting (where applicable)
- ✅ Time and space complexity notes
- ✅ Optimized implementation where possible
- ✅ Beginner-friendly and ideal for interviews or learning

---

## 📚 Algorithms Covered

### 1. 🔁 Bubble Sort

- **Concept**: Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
- **Optimization**: Stops early if no swaps occur in a pass (indicating array is already sorted).
- **Best Case**: `O(n)` (already sorted)
- **Average Case**: `O(n²)`
- **Worst Case**: `O(n²)`
- **Space Complexity**: `O(1)`
- **Stable**: ✅ Yes

📌 *Good for educational purposes but inefficient for large datasets.*

---

### 2. 📌 Selection Sort

- **Concept**: Repeatedly selects the minimum element from the unsorted part and places it at the beginning.
- **Best / Avg / Worst Case**: `O(n²)`
- **Space Complexity**: `O(1)`
- **Stable**: ❌ No (but can be made stable with extra effort)

📌 *Very intuitive but not adaptive to input ordering.*

---

### 3. 🧩 Insertion Sort

- **Concept**: Builds the sorted array one element at a time by inserting elements into their correct position.
- **Best Case**: `O(n)` (already sorted)
- **Average Case**: `O(n²)`
- **Worst Case**: `O(n²)`
- **Space Complexity**: `O(1)`
- **Stable**: ✅ Yes

📌 *Efficient for small or nearly sorted datasets.*

---

### 4. 🧬 Merge Sort

- **Concept**: A divide-and-conquer algorithm that splits the array, recursively sorts both halves, and merges them.
- **Best / Average / Worst Case**: `O(n log n)`
- **Space Complexity**: `O(n)`
- **Stable**: ✅ Yes
- **In-place**: ❌ No (uses extra space for merging)

📌 *Best suited when guaranteed O(n log n) is needed, especially for large datasets.*

---

### 5. ⚡ Quick Sort

- **Concept**: Selects a pivot element, partitions the array into two based on the pivot, and recursively sorts them.
- **Best Case**: `O(n log n)`
- **Average Case**: `O(n log n)`
- **Worst Case**: `O(n²)` (when pivot is poorly chosen, e.g., smallest/largest repeatedly)
- **Space Complexity**: `O(log n)` (due to recursion)
- **Stable**: ❌ No
- **In-place**: ✅ Yes

📌 *Faster than merge sort in practice for most real-world datasets.*

---

## 🔬 Comparison Table

| Algorithm       | Time Complexity (Best) | Time (Avg) | Time (Worst) | Space | Stable | In-place |
|----------------|------------------------|------------|--------------|--------|--------|----------|
| Bubble Sort     | O(n)                  | O(n²)      | O(n²)        | O(1)   | ✅     | ✅       |
| Selection Sort  | O(n²)                 | O(n²)      | O(n²)        | O(1)   | ❌     | ✅       |
| Insertion Sort  | O(n)                  | O(n²)      | O(n²)        | O(1)   | ✅     | ✅       |
| Merge Sort      | O(n log n)            | O(n log n) | O(n log n)   | O(n)   | ✅     | ❌       |
| Quick Sort      | O(n log n)            | O(n log n) | O(n²)        | O(log n)| ❌     | ✅       |

---
