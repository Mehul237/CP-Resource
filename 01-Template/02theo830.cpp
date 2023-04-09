// link -> https://www.codechef.com/viewsolution/67654458

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18+7;
const ll MOD = 998244353;
typedef pair<ll,ll> ii;
#define iii pair<ll,ii>
#define ull unsigned ll
#define f(i,a,b) for(ll i = a;i < b;i++)
#define pb push_back
#define vll vector<ll>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()

/*
 I hope I will get uprating and don't make mistakes
  I will never stop programming
    sqrt(-1) Love C++
      Please don't hack me
        @TheofanisOrfanou Theo830
           Think different approaches (bs,dp,greedy,graphs,shortest paths,mst)
         Stay Calm
      Look for special cases
    Beware of overflow and array bounds
  Think the problem backwards
Training

*/

int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t; cin>>t;
  
    while(t--) {
        ll n;   cin>>n;  ll arr[n];  ll ans = n;
        map<ll,ll>mp;
       
      f(i,0,n){
            cin>>arr[i];
            mp[arr[i]]++;
            ans = min(ans,n - mp[arr[i]]);
        }
        cout<<ans<<"\n";
    }
}
