```cpp

/*
------------------------------------------------------------------------------------------------------------------------
You are the one that is responsible for who you are!                                                                   +
6-Months of FOCUS & HARDWORK can put you 5-YEARS ahead in life. Don't Underestimate the power of CONSISTENCY & DESIRE  +

When talent doesn't work hard then hardwork beats talent... | Trilasha, Same batch and same CF Situation (Same month and same rating)
...hardwork always pays off                                 | but she try to level up and me GIVE UP!

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

  // According to problem take input here,
  int n;
  cin >> n;

  vector<int> arr(n);
  for (auto &x : arr) cin >> x;

  // Problem Logic start here,
  sort(arr.begin(), arr.end());

  if(arr[0] == arr[n-1]) {
    cout << -1 << "\n";
  } else { 
    cout << 2 << "\n";
  }

  // TC: O(N log N)
  // SC: O(1)
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
