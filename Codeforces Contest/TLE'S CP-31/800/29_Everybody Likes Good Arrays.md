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
  // Write here
  ll n;
  cin >> n;
  ll in[n];

  for(ll i=0; i<n; i++) {
    cin >> in[i];
  }

  ll opsCnt = 0;

  for(ll i=0; i<n-1; i++) {
    if((in[i] % 2) == (in[i+1] % 2)) 
      opsCnt++;
  }
  
  cout << opsCnt << nline;
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

// tc - O(n) = O(100)
// sc - O(n) = O(100)
```
