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
>Given an array of intervals where `intervals[i]` = `[starti, endi]>`, Select the maximum number of activities that can be performed >by a single person, assuming that a person can only work on a >single activity at a given day.

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

You will start on the 1st day and you cannot take two or more courses simultaneously.

Return the maximum number of courses that you can take.

### status:
- solved.
- tested with **Googletest**.
- Runtime: 1036 ms.
- Memory Usage: 84.1 MB.
- Language: C++.

### Source: https://leetcode.com/problems/course-schedule-iii
