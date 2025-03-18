```cpp

/*
------------------------------------------------------------------------------------------------------------------------
You are the one that is responsible for who you are!                                                                   +
6-Months of FOCUS & HARDWORK can put you 5-YEARS ahead in life. Don't Underestimate the power of CONSISTENCY & DESIRE  +
------------------------------------------------------------------------------------------------------------------------

***********************
 Mehul Thuletiya      *
 CF: Parzival_237     *
 CC: mehul_237        *
***********************

*/


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nline "\n"
const int MOD = 1e9 + 7;


void parzival_237() {
  ll n;
  cin >> n;

  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  // 1. Operation count & Breaking point find with min operation
  ll ops = INT_MAX;

  for(int i = 0; i < n - 1; i++) {
    if(v[i] <= v[i + 1]) {
      ll diff = v[i+1] - v[i];
      ll req_ops = (diff/2) + 1;
      ops = min(ops, req_ops);
    } else {
      ops = 0;
    }
  }
  
  cout << ops << nline;
}


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t1; 
  cin >> t1;

  while(t1--) {
    parzival_237();
  } 

  return 0;
}
```
