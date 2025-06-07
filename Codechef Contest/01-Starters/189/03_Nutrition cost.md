```cpp

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, c;
    cin >> n >> c;

    vector<ll> arr(n);  // Item types or IDs
    vector<ll> brr(n);  // Costs associated with each item
    map<ll, ll> min_cost_index;  // Maps each item type to the index with minimum cost

    // Input arrays
    for (ll i = 0; i < n; i++) cin >> arr[i];
    for (ll i = 0; i < n; i++) cin >> brr[i];

    // Step 1: Filter duplicates and keep only the minimum cost for each item type
    for (ll i = 0; i < n; i++) {
        if (min_cost_index.find(arr[i]) != min_cost_index.end()) {
            ll prev_idx = min_cost_index[arr[i]];
            if (brr[i] < brr[prev_idx]) {
                brr[prev_idx] = -1;  // Mark previous as removed
                min_cost_index[arr[i]] = i;  // Update to current
            } else {
                brr[i] = -1;  // Mark current as removed
            }
        } else {
            min_cost_index[arr[i]] = i;  // First time this type appears
        }
    }

    // Step 2: Collect remaining valid costs
    vector<ll> valid_costs;
    for (ll i = 0; i < n; i++) {
        if (brr[i] != -1)
            valid_costs.push_back(brr[i]);
    }

    // Step 3: Calculate total cost needed to bring all costs up to at least 'c'
    ll total_extra_cost = 0;
    for (ll cost : valid_costs) {
        if (cost < c) {
            total_extra_cost += (c - cost);
        }
    }

    cout << total_extra_cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

```

<br>
<hr>
<br>

```cpp

// IIT Roourke | Expert @CF, 5 * CC | SWE Intern Uber'24 | Batch 2025
// https://www.codechef.com/users/gujar_neha

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file  
#include <ext/pb_ds/tree_policy.hpp>  
#include <functional> // for less  
using namespace std;
using namespace __gnu_pbds;  
typedef tree<long long, null_type, less<long long>, rb_tree_tag,  tree_order_statistics_node_update>  ordered_set; 
typedef long long ll; // can use ordered_set for order_by_key and find position in logn
typedef unsigned long long ull;
typedef long double ld;
// bool divs1[1000000];
set<ll> logvec64;
map<ll,ll>getlog64;
const ll modv=1000000007;
// ll fact[200005];
// ull invfact[200005];

ll modd(ll a)
{
	if(a>0) return a;
	return (-1)*a;
}

ll rem(ll x,ll a)
{
	if(x%a==0) return a;
	return x%a;
}

void store_log()
{
    ll a=1;
    for(ll i=0;i<65;i++) 
    {
        logvec64.insert(a);
        getlog64[a]=i;
        a=a*2;
    }
}

ll binary_search(vector<ll> arr, ll val)
{
    ll start, end;
    while (start<end)
    {
        ll mid = (start+end)/2;
        if(val<arr[mid]) end=mid;
        else if (val>arr[mid])
        {
            start=mid;
        }
        else return mid;
    }
    return -1;
}

long long calculate(long long p, 
                    long long q) 
{ 
    long long mod = 1000000007, expo; 
    expo = mod - 2; 
    while (expo) { 
        if (expo & 1) { 
            p = (p * q) % mod; 
        } 
        q = (q * q) % mod; 
        expo >>= 1; 
    } 
    return p; 
} 

ll binpow(ll a,ll b)
{
    a = a;
    if(b==0) return 1;
    ll p = binpow(a,b/2);
    p = p;
    if(b%2==0)
    {
        return ((p*p));
    }
    else return ((((p*p))*a));
}

ll binpow2(ll a,ll b)
{
    if(b==0) return 1;
    ll p = binpow2(a,b/2);
    if(b%2==0)
    {
        return ((p*p));
    }
    else return ((((p*p))*a));
}

// bool dfs(vector<ll> adj[], bool vis[], int ver, int par,ll k)
// {
//     if(vis[ver]||k==0) 
//     {
//         cout<<"hmm";
//         return true;
//     }
//     vis[ver]=true;
//     bool ans=false;
//     for(auto child:adj[ver])
//     {
//         if(child!=par) ans = ans | dfs(adj,vis,child,ver,k-1);
//     }
//     return ans;
// }

void dijkstra(vector<pair<ll,ll>> adj[],int ver)
{
    set <ll> s;
    while(!s.empty())
    {

    }
}

bool isOverflow(long long a, long long b)
{
    // Check if either of them is zero
    if (a == 0 || b == 0) 
        return false;
     
    long long result = a * b;
    if (a == result / b)
        return false;
    else
        return true;
}

string getbinary(ll b)
{
    string s = "";
    while (b>0)
    {
        if (b%2==1)
        {
            s.push_back('1');
        }
        else
        {
            s.push_back('0');
        }
        b = b/2;
    }
    ll i = s.length();
    for (; i < 60; i++)
    {
        s.push_back('0');
    }
    reverse(s.begin(),s.end());
    return s;
}

vector<ll> getbinaryv(ll b,ll n)
{
    string s = "";
    ll vv=b;
    while (b>0)
    {
        if (b%2==1)
        {
            s.push_back('1');
        }
        else
        {
            s.push_back('0');
        }
        b = b/2;
    }
    ll i = s.length();
    for (; i < n; i++)
    {
        s.push_back('0');
    }
    // reverse(s.begin(),s.end());
    // cout<<s<<" "<<vv<<"\n";
    vector<ll>v;
    for ( i = 0; i < n; i++)
    {
        if (s[i]=='0')
        {
            v.push_back(0);
            continue;
        }
        v.push_back(1);
        // cout<<v[i];
    }
    // cout<<"\n";
    
    return v;
}

long long getint(string s, ll ind)
{
    long long ans=0;
    long long ct=1;
    for (ll i=59; i >=0; i--)
    {
        if(s[i]=='1'&&i!=(ind)) ans+=ct;
        ct=ct*2;
    }
    return ans;
}

void dfs(ll brr[],ll vec,ll par, vector<ll>adj[],ll val)
{
    brr[vec]=val;
    if(val==0) val=1;
    else val=0;
    for(auto child:adj[vec])
    {
        if(child!=par) dfs(brr,child,vec,adj,val);
    }
}

bool bin_search(vector<pair<ll,ll>>&v,ll val)
{
    ll st=0,end=v.size()-1;
    while (st<=end)
    {
        ll mid=(st+end)/2;
        if (v[mid].first<=val&&v[mid].second>=(val+1))
        {
            return false;
        }
        else if (v[mid].first>(val+1))
        {
            end=mid-1;
        }
        else st=mid+1;
    }
    return true;
}

ll lis(vector<ll> &a)
{
    vector<ll> dp;
    for(ll i:a)
    {
        ll pos = lower_bound(dp.begin(), dp.end(),i)-dp.begin();
        if(pos==dp.size())
        {
            dp.push_back(i);
        }else{
            dp[pos] =  i;
        }
    }
    return dp.size();
}

ll mex(ll a,ll b)
{
    if(a==1&&b==2) return 0;
    if(b==1&&a==2) return 0;
    if(a==0&&b==2) return 1;
    if(b==0&&a==2) return 1;
    if(a==1&&b==0) return 2;
    if(b==1&&a==0) return 2;
    return 1;
}

void solve()
{
    ll n,c;
    cin>>n>>c;
    ll arr[n];
    ll brr[n];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++) cin>>arr[i];

    for(ll i=0;i<n;i++) 
    {
        cin>>brr[i];
        if(mp.find(arr[i])!=mp.end())
        {
            ll ind=mp[arr[i]];
            brr[ind]=min(brr[ind],brr[i]);
            brr[i]=-1;
        }
        else
        {
            mp.insert({arr[i],i});
        }
    }

    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        if(brr[i]!=-1) v.push_back(brr[i]);
    }

    sort(v.begin(),v.end());
    ll vl=0;
    for(auto y:v)
    {
        if(y<c)
        {
            vl+=(c-y);
        }
    }
    cout<<vl<<"\n";
}

ull power(ull x, ull y, int p){
    unsigned long long res = 1; // Initialize result
    x = x % p; // Update x if x>=p
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

ull modInverse(ull n,ll p){
    return power(n, p - 2, p);
}

signed main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // For log
    // store_log();//use v=(getlog64[(*(logvec64.upper_bound(n)))]-1);
    ll t=1;
    cin>>t;
    // fact[0]=1;
    // for(ll i=1;i<200005;i++)
    // {
    //     fact[i]=fact[i-1]*i;
    //     fact[i] = fact[i]%modv;
    // }
    // ll mod=1000000007;
    // invfact[0]=1;
    // for(ll i=1;i<200005;i++)
    // {
    //     invfact[i]=invfact[i-1]*modInverse(i,mod);
    //     invfact[i] = invfact[i]%modv;
    // }
    while (t--)
    {
        // cout<<"ppp";
        solve();
    }
    
    return 0;
}

/*
1. Use binary_search instead of lower_bound especially for vectors
2. Use overflow function with a mod
*/

```
