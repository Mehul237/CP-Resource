
[I haven't seen this type of question before. It's very hard to implement, but this video solution is very helpful compared to others](https://youtu.be/FR_J1lLqfFc?feature=shared)
 - Person-to-person communication depends on how effectively you explain the problem solution, enabling others to visualize it properly. This aspect matters most in terms of communication skills.
 - [ :) Ayush Rao - - JP Morgan]( https://leetcode.com/ayushnemmaniwar12/)
 
```cpp

class Solution {
public:
    int countSubmatrices(vector<vector<int>>& v, int k) {

        int n = v.size();
        int m = v[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < m; j++) {
                v[i][j] += v[i][j - 1];
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 1; j < n; j++) {
                v[j][i] += v[j - 1][i];
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (v[i][j] <= k)
                    ans++;
            }
        }
        return ans;
    }
};

// Time Complexity: o(N*N)
// Space Complexity: o(1)
```
