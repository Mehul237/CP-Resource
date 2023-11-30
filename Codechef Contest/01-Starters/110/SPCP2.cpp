#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void solve() {

/*
------------------------------------------------------------------------------------------------------------------------------------------------
  t1 - No of aircraft the airline owns 
  t2 - No of passengers travelling
  
  ceil - takes a floating-point number as an argument and returns the smallest integer, which is greater or equal to a floating-point number
------------------------------------------------------------------------------------------------------------------------------------------------
*/

    
  float t1, t2;
  cin >> t1 >> t2;
  
  float ans = ceil(t2/100);
  
  if(t1 > ans)  cout << "0\n";
  else          cout << ans - t1 << "\n";
  
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
