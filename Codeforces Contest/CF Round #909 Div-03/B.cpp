/*
------------------------------
 With help of
   - callmepandey: factor
   - TLE yt
------------------------------
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {
    
   int N;
   cin >> N;
  
   vector<int> a(N);
  
   for(int i=0; i<N; i++) {
      cin >> a[i];
    }
  
    // find the factor
    vector <int> factor;
    
    for(int i=1; i*i<=N; ++i) {
        if(N % i == 0) {
            factor.push_back(i);
            factor.push_back(N/i);
        }
    }
  
   ll ans = 0;
   
   
   // iterate through the factor
   for(auto div : factor) {
       
       ll mmin = 1e18;
       ll mmax = -1e18;
       ll sum = 0;
       
       for(int i=0; i<N; i += div) {
           
           sum = accumulate(a.begin() + i, a.begin() + i + div, 0LL);
           mmin = min(sum, mmin);
           mmax = max(sum, mmax);
           
       }
       ans = max(ans, (mmax - mmin));
   }
   
   cout << ans << "\n";
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
