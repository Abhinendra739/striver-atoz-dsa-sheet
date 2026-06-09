# Largest Element in Array

## Problem

Given an array of integers, find the largest element present in the array.

## Approach

* Initialize `maxi` with `INT_MIN`.
* Traverse the array.
* If the current element is greater than `maxi`, update `maxi`.
* Return `maxi` after the traversal.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Code

```cpp
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > maxi) {
                maxi = nums[i];
            }
        }

        return maxi;
    }
};
```
