
[Educational CF Round 158 (Div. 2) -- A. Line Trip](https://codeforces.com/problemset/problem/1901/A)


```cpp

#include <bits/stdc++.h> 
using namespace std;
 
int main() {

  int t;
  cin >> t;

  while (t--) {

    int n, x;
    cin >> n >> x;

    int prev = 0, ans = 0;

    for (int i=0, a; i<n; ++i) {
      cin >> a;
      ans = max(ans, a - prev);
      prev = a;
    }

    ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';
  }
}

```
