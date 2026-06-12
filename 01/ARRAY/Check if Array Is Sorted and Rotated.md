# Check if Array Is Sorted and Rotated

## Problem

Given an array `nums`, return `true` if the array was originally sorted in non-decreasing order and then rotated some number of times. Otherwise, return `false`.

## Approach

* Count the number of places where the order breaks.
* Traverse the array and check if `nums[i-1] > nums[i]`.
* If such a condition occurs, increment `count`.
* Also compare the last element with the first element to account for rotation.
* If the number of breaks is at most `1`, the array is sorted and rotated.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Code

```cpp
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i = 1; i < n; i++) {
            if(nums[i - 1] > nums[i]) {
                count++;
            }
        }

        if(nums[n - 1] > nums[0]) {
            count++;
        }

        return count <= 1;
    }
};
```
