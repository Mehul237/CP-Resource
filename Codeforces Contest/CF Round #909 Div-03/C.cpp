#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {
    
  int n;
  cin >> n;
 
  vector <int> a(n);
        
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
 

  ll ans = -1e18, sum  = 0;


  for (int i=0; i<n; i++) {
        
    if (i > 0 && abs(a[i]) % 2 == abs(a[i - 1]) % 2) {
      sum = 0;
    }
  
    ans = max(ans, sum += a[i]);
    sum = max(sum, 0LL);

  }

  cout << ans << '\n';

}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t1; 
  cin>>t1;

  while(t1--) {
    playBattle();
  } 

  return 0;
}
