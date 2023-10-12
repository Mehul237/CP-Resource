#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void solve() {
    
   int n, m;
   cin >> n >> m;
   
   cout << min( (n/m), 20 ) << "\n";

}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t1; 
  cin>>t1;

  while(t1--) {
    solve();
  } 

  return 0;
}
