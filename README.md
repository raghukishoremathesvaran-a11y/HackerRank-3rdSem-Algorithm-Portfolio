# HackerRank Algorithms & GitHub Coding Portfolio

## Student Information

* **Name:** Raghukishore Mathesvaran
* **USN:** R25EF208
* **Semester:** 3rd Semester
* **Programming Language:** C++
* **HackerRank Profile:** https://www.hackerrank.com/profile/raghukishoremat1
* **GitHub Repository:** https://github.com/raghukishoremathesvaran-a11y/HackerRank-3rdSem-Algorithm-Portfolio

## Project Overview

This project contains solutions to five algorithmic problems completed on HackerRank as part of the 3rd-semester CSE studio activity.

The objective is to practice problem-solving, implement algorithms using C++, analyze time and space complexity, and maintain a public coding portfolio on GitHub.

## Problem Solutions

### 1. Mini-Max Sum

* **Approach:** Calculate the total sum, minimum value, and maximum value in one traversal. Subtract the maximum from the total to get the minimum sum, and subtract the minimum to get the maximum sum.
* **Time Complexity:** O(N)
* **Auxiliary Space:** O(1)
* **Solution:** `01-Mini-Max-Sum/solution.cpp`

### 2. Birthday Cake Candles

* **Approach:** Traverse the array while tracking the maximum candle height and the number of candles with that height.
* **Time Complexity:** O(N)
* **Auxiliary Space:** O(1)
* **Solution:** `02-Birthday-Cake-Candles/solution.cpp`

### 3. Insertion Sort – Part 1

* **Approach:** Store the last element as the value to insert. Shift larger elements one position to the right, print each intermediate state, and place the value in its correct position.
* **Shifting Algorithm Complexity:** O(N)
* **Total Worst-Case Time Including Printing:** O(N²), because the implementation prints the entire array after each shift.
* **Auxiliary Space:** O(1)
* **Solution:** `03-Insertion-Sort-Part-1/solution.cpp`

### 4. Binary Search – Intro to Tutorial Challenges

* **Approach:** Use binary search on a sorted array. Compare the target with the middle element and repeatedly reduce the search range by half.
* **Time Complexity:** O(log N)
* **Auxiliary Space:** O(1)
* **Solution:** `04-Binary-Search/solution.cpp`

### 5. Mark and Toys

* **Approach:** Sort toy prices in ascending order and purchase the cheapest toys first until the remaining budget cannot afford the next toy.
* **Time Complexity:** O(N log N)
* **Auxiliary Space:** O(1) explicit extra space, excluding sorting implementation details.
* **Solution:** `05-Mark-and-Toys/solution.cpp`

## Complexity Summary

| Problem                 | Time Complexity          | Auxiliary Space           |
| ----------------------- | ------------------------ | ------------------------- |
| Mini-Max Sum            | O(N)                     | O(1)                      |
| Birthday Cake Candles   | O(N)                     | O(1)                      |
| Insertion Sort – Part 1 | O(N²) including printing | O(1)                      |
| Binary Search           | O(log N)                 | O(1)                      |
| Mark and Toys           | O(N log N)               | O(1) explicit extra space |

## Completion and Evidence

All five selected HackerRank challenges have been completed.

Screenshots of accepted submissions and any earned badges should be included in the final PDF report as evidence.

## Conclusion

This activity provided practical experience with array traversal, greedy algorithms, sorting, and binary search. Implementing the solutions in C++ helped strengthen algorithmic thinking and understanding of time and space complexity. Publishing the code on GitHub also provided experience in organizing programming work into a structured public portfolio.
