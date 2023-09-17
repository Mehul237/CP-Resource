

class Solution {
public:
    int countWays(vector<int>& nums) {
      
        sort(nums.begin(), nums.end());
      
        int n = nums.size(), ways = (nums[0] > 0);
      
        for(int i=0; i<n; i++) {
          
            if(nums[i] < i+1) {
                if(i == n-1) {
                    ways++;
                } else if(nums[i+1] > (i+1)) {
                    ways++;
                }
            }
        }
        return ways;
    }
};



// ----------------------------------------------------------------------------


class Solution {
public:
  int countWays(vector<int>& a) {
    
    sort(a.begin(), a.end());
    int ret = 0;
    int n = a.size();
    
    for (int i = 0; i <= n; ++i) {
      if (i == 0 || i > a[i - 1]) {
        if (i == n || i < a[i]) {
          ++ret;
        }
      }
    }
    return ret;
  }
};
