# Grid Paths

This code implements a dynamic programming algorithm for counting the number of paths from the top-left cell to the bottom-right cell in a grid, avoiding obstacles represented by '*'. Here's the algorithm:

1. Define a function `isValid(i, j, n)` to check if the cell (i, j) is within bounds of the grid of size 'n'.
2. Implement a recursive function `f(i, j, grid)` that returns the number of paths from (0, 0) to (i, j).
3. If the current cell is the starting cell (0, 0), return 1 if it's not an obstacle, else 0.
4. If the cell is out of bounds or an obstacle, return 0.
5. Use memoization with 2D array 'dp' to store previously computed results.
6. Calculate the number of paths by summing paths from the cell above and the cell to the left.
7. Return the result modulo M (1e9+7) to avoid overflow.
8. In the main function, read input for grid size 'n' and the grid itself.
9. Calculate the answer 'ans' by calling `f(n-1, n-1, grid)` and store it.
10. Output 'ans', which represents the number of valid paths from (0, 0) to (n-1, n-1) in the grid.

This algorithm ensures each cell is visited once, using memoization to store and reuse results to avoid redundant computations, ultimately computing the total number of valid paths through the grid modulo M.


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
