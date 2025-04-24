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

  // According to problem take input here,
  int n;
  cin >> n;
  vector<int> a(n);

  for(int i=0; i<n; i++) {
     cin >> a[i];
  }


  // Problem Logic start here,
  for(int i=0; i<n; i++) {
    if(a[i] == 1) {
        a[i]++;
    }
  }

  for(int i=0; i<n-1; i++) {
    if(a[i+1] % a[i] == 0) {
        a[i+1]++;
    }
  }

  for(int i=0; i<n; i++) {
    cout << a[i] << " ";
  }

  cout << "\n";
  
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
