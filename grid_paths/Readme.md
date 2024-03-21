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