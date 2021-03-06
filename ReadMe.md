# What is this?

this repo will contain a combination of uni assignments, interview questions, online problem solving contests, etc..  

---  

## 1. Sum of Strings:

### files associated:
1. `sumOfStr.cpp`
2. `testsumofstr.cpp`

### Problem statement:
>Given two *non-negative integers*, `num1` and `num2` represented >as *string*, return the sum of `num1` and `num2` as a *string*.
>
>You must solve the problem without using any built-in library for >handling large integers (such as BigInteger). You must also not >convert the inputs to integers directly.

### status:
- solved.
- tested with **Googletest**.
- Runtime: 0 ms.
- Memory: 6.8 MB.
- Language: C++.

### source:
https://leetcode.com/problems/add-strings/

---  
## 2. Activity selection
### greedy
### Problem statement:
>Given an array of intervals where `intervals[i]` = `[starti, endi]
>`, Select the maximum number of activities that can be performed 
>by a single person, assuming that a person can only work on a 
>single activity at a given day.

### status:
- solved.
- tested with **Googletest**.
- Runtime: less than 1 s.
- Language: C++.
### source: Analysis and design of algorithms course (uni).
---  
## 3. Longest Common Subsequence
### Dynamic programming
### Problem statement:
>Given two strings `text1` and `text2`, return the length of their >longest **common subsequence**. If there is no common >subsequence, return `0`.
>
>A subsequence of a string is a new string generated from the >original string with some characters (can be none) deleted >without changing the relative order of the remaining characters.
>
>    For example, "ace" is a subsequence of "abcde".
>
>A common subsequence of two strings is a subsequence that is >common to both strings.

### status:
- solved.
- tested with **Googletest**.
- Runtime: 8 ms.
- Memory: 10.5 MB.
- Language: C++.
---
## 4. Robot Bounded In Circle
### Topics :  
    Math , String, Simulation.     
### Problem statement:
>On an infinite plane, a robot initially stands at `(0, 0)` and >faces `north`. The robot can receive one of three instructions:
>
>*    "G": go straight 1 unit;
>*    "L": turn 90 degrees to the left;
>*    "R": turn 90 degrees to the right.
>
>The robot performs the instructions given in order, and repeats >them forever.
>
>Return `true` if and only if there exists a circle in the plane >such that the robot never leaves the circle.

### status:
- solved.
- tested with **Googletest**.
- Runtime: 0 ms, faster than 100.00% of C++ online submissions for Robot Bounded In Circle.
- Memory Usage: 6.2 MB, less than 48.40% of C++ online submissions for Robot Bounded In Circle.
- Language: C++.

### Source: https://leetcode.com/problems/robot-bounded-in-circle
---  
## 5. Course Schedule III
### Topics :  
    Greedy , Heap(Priority Queue).       
### Problem statement:
>There are ``n`` different online courses numbered from ``1`` to `n`. You are given an array `courses` where `courses[i] = [durationi, lastDayi]` indicate that the ith course should be taken continuously for `durationi` days and must be finished before or on `lastDayi`.
>
>You will start on the 1st day and you cannot take two or more courses simultaneously.
>
>Return the maximum number of courses that you can take.

### status:
- solved.
- tested with **Googletest**.
- Runtime: 1036 ms.
- Memory Usage: 84.1 MB.
- Language: C++.

### Source: https://leetcode.com/problems/course-schedule-iii
---  
## 6. Add Binary
### Topics :  
    Math , String, Bit Manipulation, Simulation.       
### Problem statement:
>Given two binary strings `a` and `b`, return their sum as a binary string.


### status:
- solved.
- tested with **Googletest**.
- Runtime: 3 ms. faster than 68.05% of C++ online submissions for Add Binary.
- Memory Usage: 8.5 MB.
- Language: C++.

### Source: https://leetcode.com/problems/add-binary  
---  
## 7. Sort Colors
### Topics :  
    Array, Sorting.       
### Problem statement:
>Given an array `nums` with `n` objects colored red, white, or blue, sort 
>them 
>**in-place** so that objects of the same color are adjacent, with the colors in 
>the order red, white, and blue.
>
>We will use the integers `0`, `1`, and `2` to represent the color red, white, and 
>blue, respectively.
>
>You must solve this problem without using the library's sort function.

### status:
- solved.
- tested with **Googletest**.
- Runtime:  0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
- Memory Usage: 8.4 MB.
- Language: C++.

### Source: https://leetcode.com/problems/sort-colors
---  
## 8. Sum of Root To Leaf Binary Numbers 
### Topics :  
    Binary Tree, Depth-first-search.       
### Problem statement:
>You are given the `root` of a binary tree where each node has a value `0` >or `1`. Each root-to-leaf path represents a binary number starting with >the most significant bit.
>
>   * For example, if the path is` 0 -> 1 -> 1 -> 0 -> 1`, then this could >represent `01101` in binary, which is `13`.
>
>For all leaves in the tree, consider the numbers represented by the path >from the root to that leaf. Return the *sum of these numbers*.
>
>The test cases are generated so that the answer fits in a **32-bits** integer.

### status:
- solved.
- tested with **Googletest**.
- Runtime: 8 ms, faster than 53.68% of C++ online submissions for Sum of Root To Leaf Binary Numbers.
- Memory Usage: 20.4 MB.
- Language: C++.

### Source: https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers
---  
## 9. Radix Sort
### Topics :  
    Linear time sorting, Counting sort.

### Problem Statement :
> Sort the given array of non-negative integers `nums` in linear-time complexity `O(n)` and linear space `O(n)`.

### Status:  
- Solved.
- tested on randomly generated arrays with **Googletest**.
- Runtime for 1 array of size $10^{7}$ = 25.04 s.
- Runtime for 1 array of size $10^{5}$ = 0.26 s.
- Language: C++.

--- 
## 10. Median of Two Sorted Arrays  
### Topics :  
    Array, Binary Search, Divide-And-Conquer.         
### Problem statement:  
>Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the median of the two sorted arrays.
>
>The overall run time complexity should be `O(log (m+n))`.

### status:
- In progress.
- testing with **Googletest**.
- Language: C++.

### Source: https://leetcode.com/problems/median-of-two-sorted-arrays
---  

## 10. Two Sum  

### Problem Statement

> Given an array of integers `nums` and an integer `target`, return *indices* of the two numbers such that they add up to `target`.
> You may assume that each input would have ***exactly* one solution**, and you may not use the *same* element twice.
> You can return the answer in any order.

### Approaches  

#### 1. Brute Force 

- Time Complexity: $O(n^{2})$
- Spacial Complexity: $O(1)$
- tested with **Googletest**.
- Runtime: **605 ms**, faster than 17.41% of C++ online submissions for Two Sum.
- Memory Usage: **10 MB**, less than 94.82% of C++ online submissions for Two Sum.
- Language: C++.

#### 2. Hash Map

- Time Complexity: $O(n)$
- Spacial Complexity: $O(n)$
- tested with **Googletest**.
- Runtime: **19 ms**, faster than 58.92% of C++ online submissions for Two Sum.
- Memory Usage: **11 MB**, less than 23.81% of C++ online submissions for Two Sum.
- Language: C++.

### Source: https://leetcode.com/problems/two-sum/
---  

## 11. Four Sum II  

### Problem Statement

> Given four integer arrays `nums1`, `nums2`, `nums3`, and `nums4` all of length `n`, return the number of tuples `(i, j, k, l)` such that:
> - `0 <= i, j, k, l < n`
> - `nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0`


### Approaches  

#### 1. Brute Force 

- Time Complexity: $O(n^{4})$
- Spacial Complexity: $O(1)$
- tested with **Googletest**.
- Language: C++.

#### 2. Hash Map

- Time Complexity: $O(n^{2})$
- Spacial Complexity: $O(n^{2})$
- tested with **Googletest**.
- Runtime: **575 ms ms**.
- Memory Usage: **25  MB**.
- Language: C++.

### Source: https://leetcode.com/problems/4sum-ii

---  

## 12. First Bad Version

### Problem Statement  

> You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.
>
> Suppose you have `n` versions `[1, 2, ..., n]` and you want to find out the first bad one, which causes all the following ones to be bad.
>
> You are given an API `bool` `isBadVersion(version)` which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

### Status  

- Time Complexity: $O(\lg(n))$
- Spacial Complexity: $O(\lg(n))$
- tested with **Googletest**.
- Runtime: **0 ms**.
- Memory Usage: **6.1 MB**.
- Language: C++.

### Source: https://leetcode.com/problems/first-bad-version/