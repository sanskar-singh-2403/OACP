# Dice Combinations

This code calculates the number of ways to form a sum 'n' using the combinations of numbers 1 through 6. Here's an explanation of the algorithm:

1. Define a function `comb(n)` that recursively calculates the number of ways to form the sum 'n' using combinations of 1 through 6.
2. Base cases:
   - If 'n' is negative, return 0.
   - If 'n' is 0, there's one way (not choosing any number), so return 1.
   - If the result for 'n' is already calculated in `dp`, return the stored result.
3. Calculate the answer by adding the combinations for 'n-1', 'n-2', 'n-3', 'n-4', 'n-5', and 'n-6'.
4. Store the result in `dp[n]` and return `dp[n] % M` to avoid overflow.
5. In the main function, initialize `dp` array with -1 and set `dp[0]` to 1 (base case for sum=0).
6. Read input for the target sum 'n'.
7. Calculate the answer 'ans' by calling `comb(n)`.
8. Output 'ans', which represents the number of ways to form the sum 'n' using combinations of 1 through 6.

This algorithm uses dynamic programming (memoization) to avoid redundant calculations by storing and reusing previously computed results. It efficiently calculates the number of combinations to form the given sum 'n' using numbers 1 through 6, ensuring the result remains within the modulo M to prevent overflow.