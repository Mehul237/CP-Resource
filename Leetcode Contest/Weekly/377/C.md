
```cpp

const long long INF = 0x3F3F3F3F3F3F3FLL;

class Solution {
public:

    long long minimumCost(string source, string target, vector<char>& original, vector<char>& changed, vector<int>& cost) {
        long long dis[26][26];
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < 26; ++j) {
                dis[i][j] = INF;
            }
            dis[i][i] = 0;
        }
        
        for (int i = 0; i < original.size(); ++i) {
            int u = original[i] - 'a';
            int v = changed[i] - 'a';
            
            dis[u][v] = min(dis[u][v], (long long) cost[i]);
        }

        for (int k = 0; k < 26; ++k) {
            for (int i = 0;i < 26; ++i) {
                for (int j = 0; j < 26; ++j) {
                    if (i != j && j != k && k != i) {
                        dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                    }
                }
            }
        }
        
        int n = source.size();
        vector<long long> dp(n + 1, INF);
        dp[0] = 0;
        
        for (int i = 0; i < n; ++i) {
            if (source[i] == target[i]) {
                dp[i + 1] = min(dp[i + 1], dp[i]);
            }
            auto u = source[i] - 'a';
            auto v = target[i] - 'a';
                dp[i + 1] = min(dp[i + 1], dp[i] + dis[u][v]);
        }

        if (dp[n] >= INF) {
            return -1;
        }
        return dp[n];        
    }
};

```
