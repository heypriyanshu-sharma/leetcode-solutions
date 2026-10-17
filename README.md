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

The approach made sense, but LeetCode gave me a Time Limit Exceeded (TLE) error on the larger test cases.

- Time: `O(n²)`
- Extra space: `O(1)`

**Optimized (C++)**

File: [`optimizedsol.cpp`](./arrays/best-time-to-buy-and-sell-stock/optimizedsol.cpp)

After getting TLE with brute force, I tried solving it using a single loop. I keep track of the lowest price I've seen so far and calculate the profit at each price.

This way, I don't need to check every possible buying and selling pair.

- Time: `O(n)`
- Extra space: `O(1)`

### 3. Contains Duplicate — LeetCode #217

For this problem, I tried using sorting first and then improved the approach using a set in Python.

**Brute Force (C++)**

File: [`sorting.cpp`](./arrays/contains-duplicate/sorting.cpp)

I sorted the array and used a loop to check neighboring elements. If two adjacent elements were equal, it meant the array contained a duplicate.

- Time: `O(n log n)`

**Optimized (Python)**

File: [`optimizedsol.py`](./arrays/contains-duplicate/optimizedsol.py)

I used a set to keep track of the elements I'd already visited. If a number was already in the set, I returned `True`. Otherwise, I added it and continued checking.

This avoids comparing every pair of elements.

- Average time: `O(n)`
- Extra space: `O(n)`

### 4. Maximum Subarray — LeetCode #53

I started with a brute-force approach and then improved it using Kadane's algorithm.

**Brute Force (C++)**

File: [`brute_force.cpp`](./arrays/maximum-subarray/brute_force.cpp)

I used two loops to check every possible contiguous subarray. Instead of recalculating each sum from scratch, I kept a running sum as I extended the subarray.

The logic worked, but LeetCode gave me a Time Limit Exceeded (TLE) error on larger test cases.

- Time: `O(n²)`
- Extra space: `O(1)`

**Optimized (C++)**

File: [`optimizedsol.cpp`](./arrays/maximum-subarray/optimizedsol.cpp)

I used Kadane's algorithm to keep track of the current subarray sum and the maximum sum found so far. At each element, I decide whether to extend the current subarray or start a new one.

This avoids checking every possible subarray.

- Time: `O(n)`
- Extra space: `O(1)`

## What I Learned

The brute-force approach helped me understand the problems, but it was too slow for large inputs. The optimized approaches work by remembering useful information instead of repeatedly checking every possibility.

With Two Sum, I used a dictionary to find the required number faster. With Best Time to Buy and Sell Stock, I kept track of the lowest price so far. With Contains Duplicate, I learned how sorting and sets can help detect duplicates more efficiently. With Maximum Subarray, I learned how Kadane's algorithm can find the maximum sum without checking every possible subarray.

I'm trying to understand why each approach works instead of just memorizing solutions.
