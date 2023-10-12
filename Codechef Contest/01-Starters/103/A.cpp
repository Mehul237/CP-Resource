#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t1; 
  cin >> t1;

  if ( t1 < 3) {
      cout << "GOLD";
  }
  else if ( t1 < 6) {
      cout << "SILVER";
  }
  else {
      cout << "BRONZE";
  }

  return 0;
}
