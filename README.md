# My LeetCode Solutions

I'm practicing DSA by solving LeetCode problems. I try to understand the brute-force approach first and then see if I can make it faster.

## My Solutions

### 1. Two Sum — LeetCode #1

My first LeetCode problem! I started with a brute-force solution in C++ and then tried to make it faster using Python.

**Brute Force (C++)**

File: [`brute_force.cpp`](./arrays/two-sum/brute_force.cpp)

I used two loops to check every possible pair of numbers. Whenever their sum matched the target, I returned their indices.

- Time: `O(n²)`
- Extra space: `O(1)`

**Optimized (Python)**

File: [`optimizedsol.py`](./arrays/two-sum/optimizedsol.py)

For the optimized version, I used a dictionary to remember the numbers I'd already visited and their indices.

For every number, I calculated the number needed to reach the target. If I'd already seen that number, I could return both indices without checking every possible pair.

- Average time: `O(n)`
- Extra space: `O(n)`

### 2. Best Time to Buy and Sell Stock — LeetCode #121

I tried solving this problem using brute force first, just like I did with Two Sum.

**Brute Force (C++)**

File: [`brute_force.cpp`](./arrays/best-time-to-buy-and-sell-stock/brute_force.cpp)

I used two loops to check every possible buying and selling pair. For each pair, I calculated the profit and kept track of the maximum profit.

The approach makes sense, but LeetCode gave me a Time Limit Exceeded (TLE) error on the larger test cases.

- Time: `O(n²)`
- Extra space: `O(1)`

I'll try to optimize this approach next.

## What I'm Learning

- How nested loops can be used to solve problems using brute force.
- How dictionaries can help avoid repeatedly searching through an array.
- How to improve an algorithm by using extra memory or a better approach.
- How to compare time and space complexity.
- Why a solution that works on small inputs might be too slow for large ones.

I'm still learning, so I'll keep adding problems as I solve them and improve my problem-solving skills.
