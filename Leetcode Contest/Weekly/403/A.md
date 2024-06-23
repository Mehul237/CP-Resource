
[3194. Minimum Average of Smallest and Largest Elements](https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/description/)

```cpp

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        double min_in_avg = INT_MAX;
        sort(nums.begin(), nums.end()); // O(nlogn)

        for (int i = 0; i < n / 2; i++) // O(n)
        {
            double avg = ((nums[i] + nums[n - i - 1]) * 1.0 / 2.0);
            min_in_avg = min(min_in_avg, avg);
        }
        return min_in_avg;
    }
};

// TC - O(nlogn)
// SC - O(1)

```
