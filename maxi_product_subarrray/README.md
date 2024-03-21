**Algorithm:**

1. **Initialization:**
   - `int prod = 1`: Initializes a variable `prod` to store the current product, starting from 1.
   - `int maxLeft = nums[0]`: Initializes `maxLeft` to store the maximum product seen so far from the beginning of the array (including the current element). It's set to the first element's value initially.
   - `int maxRight = nums[0]`: Similar to `maxLeft`, `maxRight` stores the maximum product seen so far from the end of the array. It's also set to the first element's value.
   - `bool zeroPresent = false`: Initializes a boolean flag `zeroPresent` to track if a zero exists in the array.

2. **Iterate from left to right:**
   - `for(auto &e:nums)`: This loop iterates over each element (`e`) in the `nums` vector using a reference.
      - `prod *= e`: Updates `prod` by multiplying it with the current element.
      - `if(e == 0) { ... }`: Checks if the current element is zero.
         - `zeroPresent = true`: Sets the flag if a zero is encountered.
         - `prod = 1`: Resets `prod` to 1 if a zero is encountered, as any further multiplication with zero will result in zero product. This ensures we only consider subarrays that don't include trailing zeros.
         - `continue`: Skips to the next iteration to avoid considering further elements in the current subarray that might be affected by the zero.
      - `maxLeft = max(maxLeft, prod)`: Updates `maxLeft` with the larger value between its current value and the current product (`prod`). This ensures we keep track of the maximum product seen so far from the beginning, considering subarrays that might end at the current element.

3. **Reset and iterate from right to left:**
   - `prod = 1`: Resets `prod` to 1 for the right-side iteration.

   - `for(int i=nums.size()-1;i>=0;i--)`: This loop iterates from the last element (`nums.size()-1`) to the first element (`i >= 0`) of the `nums` vector.
      - Similar logic as the left-side iteration is applied here, updating `prod`, handling zeros, and keeping track of the maximum product seen so far from the end (`maxRight`).

4. **Handle zero and return result:**
   - `if(zeroPresent) return max(max(maxLeft,maxRight),0)`: Checks if a zero was encountered.
      - If a zero exists, the maximum product could either be the maximum seen from the left (`maxLeft`), the maximum seen from the right (`maxRight`), or 0 (if all elements are zero). The function returns the maximum of these three values.
   - `return max(maxLeft,maxRight)`: If no zero was encountered, the maximum product is simply the larger value between `maxLeft` and `maxRight`.

**Main Function:**

* This part takes input for the number of elements (`n`) and reads the elements into a vector `nums`.
* It creates an object of class `Solution` and calls the `maxProduct` method with the `nums` vector.
* The result is printed, and the program exits.

This code efficiently finds the maximum product of a subarray by considering both left-to-right and right-to-left product calculations and handling the presence of zeros effectively.