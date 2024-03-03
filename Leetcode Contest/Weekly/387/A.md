

 0. [Juspay Intern](https://leetcode.com/spravinkumar9952/)
 1. [Google Intern 2025 Batch](https://leetcode.com/itzRaghav/)
 2. [DTU](https://leetcode.com/jainwinn/)

<br>

```cpp

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
    
        int n = nums.size();
        
        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};
        
        for (int i = 2; i < n; i++) {
            if (arr1.back() > arr2.back()) 
                arr1.push_back(nums[i]);
            else 
                arr2.push_back(nums[i]);
        }
        
        vector<int> ans;
        for (int x : arr1) 
           ans.push_back(x);
        for (int x : arr2) 
           ans.push_back(x);
        
        return ans;
    }
};

```

<br>

```cpp
class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        
        vector<int> ans1, ans2;
        
        for(int i=0; i<nums.size(); i++) {
            if(i == 0) 
                ans1.push_back(nums[i]);
            else if(i == 1)
                ans2.push_back(nums[i]);
            else{
                if(ans1.back() > ans2.back())
                    ans1.push_back(nums[i]);
                else 
                    ans2.push_back(nums[i]);
            }
        }
        
        for(int i : ans2) 
            ans1.push_back(i);
        
        return ans1;
    }
};

```
