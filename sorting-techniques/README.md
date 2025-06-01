# 🔢 Sorting Algorithms Visualizer

This project demonstrates core **comparison-based sorting algorithms** — **Bubble Sort**, **Selection Sort**, and **Insertion Sort** — implemented with clean and beginner-friendly code. Ideal for anyone learning sorting techniques and their trade-offs in terms of performance and stability.

---

## 📘 What is Sorting?

Sorting is the process of arranging data in a particular format — typically in ascending or descending order. Efficient sorting improves the performance of other algorithms (like search and merge algorithms) and is a crucial concept in computer science.

---

## ✨ Features

- In-place sorting (no extra memory used)
- Time and space complexity notes
- Easy to understand logic
- Optimized Bubble Sort (best-case performance: O(n))

---

## 📚 Algorithms Covered

### 1. 🔁 Bubble Sort

- **Concept**: Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
- **Optimized**: Stops if no swaps occur in a pass (indicating sorted array).
- **Best Case**: `O(n)` (already sorted)
- **Average Case**: `O(n²)`
- **Worst Case**: `O(n²)`
- **Space Complexity**: `O(1)`
- **Stable**: ✅

📌 *Good for educational purposes but inefficient for large datasets.*

---

### 2. 📌 Selection Sort

- **Concept**: Repeatedly finds the minimum element from the unsorted part and places it at the beginning.
- **Best, Average, Worst Case**: `O(n²)`
- **Space Complexity**: `O(1)`
- **Stable**: ❌ (can be made stable with extra steps)

📌 *Simple to understand but inefficient due to lack of adaptability to input order.*

---

### 3. 🧩 Insertion Sort

- **Concept**: Builds the sorted array one element at a time by comparing and inserting the current element into the correct position.
- **Best Case**: `O(n)` (already sorted)
- **Average Case**: `O(n²)`
- **Worst Case**: `O(n²)`
- **Space Complexity**: `O(1)`
- **Stable**: ✅

📌 *Efficient for small datasets and mostly sorted data.*

---

# 🧬 Merge Sort

This module contains an efficient implementation of **Merge Sort**, one of the most powerful and commonly used sorting algorithms based on the **Divide and Conquer** paradigm.

---

## 📖 What is Merge Sort?

**Merge Sort** is a **recursive** algorithm that divides the array into halves, recursively sorts them, and then merges the sorted halves. It is a **stable** and **comparison-based** sorting algorithm.

---

## 🧠 How it Works

1. **Divide** the array into two halves.
2. **Conquer** by recursively sorting the two halves.
3. **Combine** by merging the sorted halves into a final sorted array.

---

## 🔍 Time & Space Complexity

| Case       | Time Complexity | Space Complexity |
|------------|------------------|------------------|
| Best       | O(n log n)       | O(n)             |
| Average    | O(n log n)       | O(n)             |
| Worst      | O(n log n)       | O(n)             |

- **Stable**: ✅ Yes  
- **In-place**: ❌ No (due to auxiliary space used during merging)

---

## ✅ When to Use

- When stability matters
- When dealing with large datasets
- When guaranteed O(n log n) performance is needed
- External sorting (merge sort is preferred when data doesn't fit into memory)

---





