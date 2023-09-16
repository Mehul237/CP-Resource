
// link -- https://cses.fi/paste/b1815390372431a76c7d84/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
   
  ll N;
  cin >> N;
  cout << N;

/*
  while (N > 1) {
    if(N % 2 == 0) 
      N /= 2;
    else
      N = 3*N+1;
    cout << " " << N;
  }
*/

  while (N > 1) {
    if((N & 1) == 1) 
      N = 3*N + 1;
    else 
      N /= 2;
    cout << " " << N;
  }


  return 0;
}
