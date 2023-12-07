## [A. 404 Not Found (267)](https://www.codechef.com/problems/ERROR404)


```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void solve() {
    
    int X, Y, Z;
    cin >> X >> Y >> Z;
    
    cout << ((Z > X*Y/2) ? "Yes\n" : "No\n");  
    
    //       2 * Z > X * Y  = (2*12 (24) > 2*10 (20))
    
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t1; 
  cin >> t1;

  while(t1--) {
    solve();
  } 

  return 0;
}
```
