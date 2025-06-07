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

<hr>
<br>

```cpp

/*
------------------------------------------------------------------------------------------------------------------------
You are the one that is responsible for who you are!                                                                   +
6-Months of FOCUS & HARDWORK can put you 5-YEARS ahead in life. Don't Underestimate the power of CONSISTENCY & DESIRE  +

When talent doesn't work hard then hardwork beats talent... | Trilasha, Same batch and same CF Situation (Same month and same rating)
...hardwork always pays off                                 | but she try to level up and me GIVE UP!

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

  // 1. Problem given statement
  // -------------------------------------------------------------
  // You are given:
  // - n food items, each has:
  //     * A[i] = vitamin type (can be duplicate)
  //     * B[i] = cost to buy
  // - You need only one of each vitamin type.
  // - You can buy some items and upgrade cost to at least 'c' if needed.
  // Goal:
  // - Minimize total amount of money needed to upgrade bought items to cost >= c
  //   while buying only distinct vitamin types.
  // -------------------------------------------------------------

  // 2. According to problem take input here,
  ll n, c;
  cin >> n >> c;

  vector<ll> vitamin_type(n);    // A[i]
  vector<ll> vitamin_cost(n);    // B[i]

  for (auto &x : vitamin_type) cin >> x;
  for (auto &x : vitamin_cost) cin >> x;

  // 3. Problem Logic start here,
  map<ll, ll> min_cost_idx;

  // Filter out duplicates — keep only the item with minimum cost for each vitamin type
  for (ll i = 0; i < n; i++) {
    if (min_cost_idx.find(vitamin_type[i]) != min_cost_idx.end()) {
      ll existing_idx = min_cost_idx[vitamin_type[i]];
      if (vitamin_cost[i] < vitamin_cost[existing_idx]) {
        vitamin_cost[existing_idx] = -1; // mark previous as invalid
        min_cost_idx[vitamin_type[i]] = i;
      } else {
        vitamin_cost[i] = -1; // current one is more costly, discard
      }
    } else {
      min_cost_idx[vitamin_type[i]] = i;
    }
  }

  // Collect valid vitamin costs after filtering
  vector<ll> final_costs;
  for (ll i = 0; i < n; i++) {
    if (vitamin_cost[i] != -1)
      final_costs.push_back(vitamin_cost[i]);
  }

  // 4. Problem analysis
  // Final answer: sum over all final costs where cost < c → (c - cost)
  ll total_upgrade_cost = 0;
  for (ll cost : final_costs) {
    if (cost < c) {
      total_upgrade_cost += (c - cost);
    }
  }

  // Output answer
  cout << total_upgrade_cost << nline;

  // TC: O(N log N) due to map and filtering
  // SC: O(N) for extra arrays and map
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

<hr>


# 💡 Problem Breakdown and Edge Case Analysis

---

## 🧠 Problem Statement Summary

You are given:
- `N` food items
- Each item has a **vitamin type** `A[i]` and a **cost** `B[i]`
- An integer parameter `C` is given.

### Goal:
You want to **buy** some food items such that:
- You only keep **one item per vitamin type** (keep the one with the lowest cost).
- For each kept item, if its cost is less than `C`, you must **upgrade** it, which costs: `C - B[i]`

#### ✅ You need to calculate the **total upgrade cost** required.

---

## ✍️ Implementation Steps

1. Input `n` and `c`
2. Read array `A[n]` (vitamin types)
3. Read array `B[n]` (costs)
4. Use a `map<ll,ll>` to track **minimum cost per vitamin type**
5. For each repeated vitamin type, retain the **minimum cost** and **invalidate** the rest (set to `-1`)
6. Collect valid costs (`B[i] != -1`)
7. For each such cost, if `< c`, add `(c - B[i])` to total
8. Print the total upgrade cost

---

## ✅ Edge Cases to Consider

### 1. Duplicate Vitamin Types With Same Cost
```
Input:
3 10
1 1 1
5 5 5
Output: 5
```
- All are same type → keep one → upgrade: `10 - 5 = 5`

---

### 2. All Items Already Cost ≥ C
```
Input:
4 10
1 2 3 4
10 20 15 12
Output: 0
```
- No upgrade needed → all costs ≥ C

---

### 3. All Costs Less Than C
```
Input:
3 5
1 2 3
1 1 1
Output: 12
```
- Upgrade all: `3 × (5 - 1) = 12`

---

### 4. Duplicate Vitamin Types With Varying Cost
```
Input:
4 10
1 1 2 2
8 5 12 9
Output: 6
```
- Type 1: min(8, 5) = 5 → upgrade = 5
- Type 2: min(12, 9) = 9 → upgrade = 1
- Total = 6

---

### 5. No Items at All
```
Input:
0 5
(empty)
Output: 0
```
- Nothing to upgrade

---

### 6. All Items of Same Vitamin Type
```
Input:
5 10
2 2 2 2 2
1 2 3 4 5
Output: 9
```
- Keep min cost (1) → upgrade: `10 - 1 = 9`

---

### 7. All Items Same Vitamin Type and Already ≥ C
```
Input:
3 7
3 3 3
9 10 15
Output: 0
```
- Keep one → already ≥ 7 → no upgrade

---

## ⚠️ Notes

- Always ensure to only count one food item per vitamin type.
- Make sure to only upgrade if cost `< C`.
- Invalidated duplicates must be ignored (`B[i] = -1`).

---

## 📦 Time and Space Complexity

- **Time Complexity**: `O(N log N)` (due to sorting and map operations)
- **Space Complexity**: `O(N)` (for storing vitamin cost mapping and filtered costs)

## ✅ Summary of Steps:
- Input parsing
- Map usage to store the minimum cost per vitamin type
- Filter duplicates
- Check which ones need upgrading (cost < c)
- Sum required upgrades

## 🚫 Need to Handle Carefully:
- Marking duplicates properly: Avoid accidentally using two of the same vitamin type.
- Updating cost array correctly when overwriting entries in the map.
- Avoid unnecessary upgrades for costs already >= c.

## 🧠 Additional Suggestions:
- If you’re using map<ll,ll> to store vitamin -> index, make sure that when replacing the index (for smaller cost), you mark the old index as invalid (-1 in cost).
- Only include valid (non -1) items in the final cost vector before checking for cost < c.

---

