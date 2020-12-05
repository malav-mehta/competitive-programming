/* 1464. Maximum Product of Two Elements in an Array, 16 ms */

#include <limits.h>

int maxProduct(int* nums, int numsSize) {
    /*
    Brute force approach.
    
    Time complexity: O(n^2)
    Space complexity: O(1)
    */
    
    int ans = INT_MIN;
    
    for (int i = 0; i < numsSize; ++i)
    for (int j = i + 1; j < numsSize; ++j) {
        int x = (nums[i] - 1) * (nums[j] - 1);
        if (ans < x) ans = x;
    }
    
    return ans;
}

