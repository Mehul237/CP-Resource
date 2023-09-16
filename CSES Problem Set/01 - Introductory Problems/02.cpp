
// link --

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
   
  ll N, sum = 0;
  cin >> N;
  
  for(int i=1; i<N; ++i) {
    int ans;
    cin >> ans;

    sum += ans;
  }

  cout << N*(N+1)/2 - sum;


  return 0;
}
