# Union of Two Sorted Arrays

## Problem

Given two arrays `nums1` and `nums2`, return the union of both arrays containing only distinct elements.

## Approach

* Use a `set` to store unique elements.
* Insert all elements from the first array into the set.
* Insert all elements from the second array into the set.
* Convert the set into a vector and return it.

## Time Complexity

O((n + m) log(n + m))

## Space Complexity

O(n + m)

## Code

```cpp
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

        set<int> st;

        for(int i = 0; i < nums1.size(); i++) {
            st.insert(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++) {
            st.insert(nums2[i]);
        }

        vector<int> unionArr(st.begin(), st.end());

        return unionArr;
    }
};
```
