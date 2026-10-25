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


### 5. Product of Array Except Self — LeetCode #238

For this problem, I started with brute force and then optimized it using prefix and suffix products.

**Brute Force (C++)**

File: [`brute_force.cpp`](./arrays/product-of-array-except-self/brute_force.cpp)

I used two loops to multiply every element except the one at the current index. The logic was straightforward, but it gave me a Time Limit Exceeded (TLE) error on larger test cases.

- Time: `O(n²)`
- Extra space: `O(1)`

**Optimized (Python)**

File: [`optimizedsol.py`](./arrays/product-of-array-except-self/optimizedsol.py)

I used prefix products to keep track of the product of elements to the left of each index. Then I traversed the array from right to left, using a running suffix product to calculate the final answer.

This avoids repeatedly multiplying the same elements and solves the problem without using division.

- Time: `O(n)`
- Extra space: `O(1)` (excluding the output array)

### 6. Majority Element — LeetCode #169

For this problem, I started with a brute-force approach and then optimized it using the Boyer-Moore Voting Algorithm.

**Brute Force (C++)**

File: [`brute_force.cpp`](./arrays/majority-element/brute_force.cpp)

I used two loops to count how many times each element appeared in the array. If an element appeared more than half the length of the array, I returned it.

The logic worked, but LeetCode gave me a Time Limit Exceeded (TLE) error on larger test cases.

- Time: `O(n²)`
- Extra space: `O(1)`

**Optimized (Python)**

File: [`optimizedsol.py`](./arrays/majority-element/optimizedsol.py)

I used the Boyer-Moore Voting Algorithm to find the majority element in a single pass. I maintained a candidate and a counter, increasing the counter when the current number matched the candidate and decreasing it when they were different.

When the counter reached zero, I selected a new candidate. Since the problem guarantees that a majority element exists, the final candidate is the answer.

- Time: `O(n)`
- Extra space: `O(1)`


### 7. Maximum Average Subarray I — LeetCode #643

**Brute Force — C++**
- Checks every contiguous subarray of size `k` and calculates its average.
- Time Complexity: `O(n × k)`
- Auxiliary Space: `O(1)`

**Optimized — Python**
- Uses a fixed-size sliding window to track the sum of `k` consecutive elements.
- Instead of recalculating the entire sum, subtracts the outgoing element and adds the incoming element.
- Time Complexity: `O(n)`
- Auxiliary Space: `O(1)` for the sliding-window algorithm, excluding the temporary initialization slice.

### 8. Minimum Size Subarray Sum (#209)

- **Brute Force (C++):** Checked subarrays using nested loops to find the minimum length. O(n²) time.
- **Optimized (Python):** Used a variable-size sliding window to find the shortest valid subarray in O(n) time.

### 9. Longest Substring Without Repeating Characters (#3)

- **Brute Force (C++):** Used nested loops and a set to find the longest substring without repeating characters. O(n² log n) time.
- **Optimized (Python):** Used a sliding window and a set to solve the problem in O(n) time.

### 10. 3Sum (#15)

- **Brute Force (C++):** Used three nested loops to find triplets that sum to zero and avoid duplicate triplets.
- **Optimized (Python):** Used sorting and two pointers to find unique triplets in O(n²) time.

### 11. Container With Most Water (#11)

- **Brute Force (C++):** Checked every pair of lines to find the maximum water container area. O(n²) time.
- **Optimized (Python):** Used two pointers to find the maximum area in O(n) time.

## What I Learned

The brute-force approach helped me understand the problems, but it was too slow for large inputs. The optimized approaches work by remembering useful information instead of repeatedly checking every possibility.

With Two Sum, I used a dictionary to find the required number faster. With Best Time to Buy and Sell Stock, I kept track of the lowest price so far. With Contains Duplicate, I learned how sorting and sets can help detect duplicates more efficiently. With Maximum Subarray, I learned how Kadane's algorithm can find the maximum sum without checking every possible subarray.

With Product of Array Except Self, I learned how prefix and suffix products can be combined to avoid repeated calculations and bring a nested-loop solution down to linear time.

I'm trying to understand why each approach works instead of just memorizing solutions.

With Majority Element, I learned how the Boyer-Moore Voting Algorithm uses a candidate and a counter to find the majority element in linear time. My brute-force solution got TLE on larger test cases, which helped me understand why choosing an efficient algorithm matters even when the logic is correct.

I'm trying to understand why each approach works instead of just memorizing solutions.

I also learned how a fixed-size sliding window can optimize problems involving consecutive elements. Instead of recalculating the sum for every window, we can update it by removing the element that leaves and adding the new element that enters. This reduces the time complexity from O(n × k) to O(n).

