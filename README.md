# Two Sum — LeetCode #1

My first LeetCode problem! I started with a brute-force solution in C++ and then tried to make it faster using Python.

## My Solutions

### 1. Brute Force (C++)

File: [`brute_force.cpp`](./brute_force.cpp)

I used two loops to check every possible pair of numbers. Whenever their sum matched the target, I returned their indices.

This approach is easy to understand, but it can get slow when the array becomes large because it checks so many pairs.

- Time: `O(n²)`
- Extra space: `O(1)`

### 2. Optimized (Python)

File: [`optimizedsol.py`](./optimizedsol.py)

For the optimized version, I used a dictionary to remember the numbers I'd already visited and their indices.

For every number, I calculated the number needed to reach the target. If I'd already seen that number, I could return both indices without checking every possible pair.

- Average time: `O(n)`
- Extra space: `O(n)`

## What I learned

- How nested loops can be used to solve a problem using brute force.
- How Python dictionaries help us find values without repeatedly searching the array.
- Why an algorithm can be made faster by using extra memory.
- How to compare time and space complexity.

This is the first problem in my DSA practice journey. I'll keep adding my solutions as I learn new approaches and improve my problem-solving skills.
