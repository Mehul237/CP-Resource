
[3195. Find the Minimum Area to Cover All Ones I](https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/description/)

```cpp

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int top = -1;
        int bottom = -1;
        int left = -1;
        int right = -1;

        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    if (top == -1)
                        top = i;
                    bottom = i;
                }
            }
        } // n*m

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[j][i] == 1) {
                    if (left == -1)
                        left = i;
                    right = i;
                }
            }
        } // n*m

        int area = (right - left + 1) * (bottom - top + 1);
        return area;
    }
};

// --right - left + 1: Length of rectangle
// --bottom - top + 1: Breath of rectangle

// TC - O(n*m)
// SC - O(1)

```
