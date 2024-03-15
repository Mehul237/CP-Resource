
[Educational CF Round 158 (Div. 2) -- A. Line Trip](https://codeforces.com/problemset/problem/1901/A)


```cpp

#include <bits/stdc++.h>
using namespace std;

void solve() {  

  int n, x;
  cin >> n >> x;
    
  vector<int> a(n);
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
    
  int ans = 0;
  int last = 0;
    
  for(int i=0; i<n; i++) {
    ans = max(ans, a[i] - last);
     // cout << "Ans -> " << ans << "\n";
    last = a[i];
     // cout << "Last -> " << last << "\n";
  }
    
  ans = max(ans, 2*(x - a[n - 1]));  
  cout << ans << "\n"; 
}



int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    
  int t = 1;
  cin >> t;
    
  for(int tc=1; tc<=t; tc++) {
    solve ();
  }
    
  return 0;
}

```
