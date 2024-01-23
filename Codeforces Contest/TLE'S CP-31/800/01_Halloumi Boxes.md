
[CF Round 912 (Div. 2) -- A. Halloumi Boxes](https://codeforces.com/contest/1903/problem/A)


```cpp

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, k;
        cin >> n >> k;
        
        vector<int> ans;

        for(int i=0, x; i<n; i++) {
            cin >> x;
            ans.push_back(x);
        }

        cout << ((k > 1 || is_sorted(ans.begin(), ans.end())) ? "YES\n" : "NO\n" );
    }
    return 0;
}

```
