
[CF Round 912 (Div. 2) -- A. Halloumi Boxes](https://codeforces.com/contest/1903/problem/A)

### Intuition - Hint: 
  - If k is greater or equal to 2 you can always swap adjacent elements

### Solution
  - If the array is already sorted or k > 1 then there is always a way (reverse of size 2 = swap consecutive elements)
  - Else it is not possible since when k = 1 the array remains the same

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
