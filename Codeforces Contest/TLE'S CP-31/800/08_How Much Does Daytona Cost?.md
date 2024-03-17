
[1878. How Much Does Daytona Cost?](https://codeforces.com/problemset/problem/1878/A)

```cpp

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle1() {  
  
  // Using unorderd map for large input, 
  // Also having the additional memory overhead to store the hash table.
  
  int n, x;
  cin >> n >> x;

  vector<int> arr(n);

  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  unordered_map<int, int> mp;
  for(int i=0; i<n; i++) {
    mp[arr[i]]++;
  }

  cout << ((mp.find(x) != mp.end()) ? "YES\n" : "NO\n"); 
}



void playBattle2() {
  
  // Linear search is more simple and efficient for small size input
  // Also, does not incur additional memory overhead compared to using an unordered_map.

  int n, x;
  cin >> n >> x;

  vector<int> arr(n);
  bool presence = false;

  for(int i=0; i<n; i++) {
    cin >> arr[i];

    if(arr[i] == x) 
      presence = true;
  }

  cout << (presence ? "YES\n" : "NO\n");
}


void playBattle() {
  
  int n, x;
  cin >> n >> x;

  vector<int> arr(n);
  bool presence = false;

  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  cout << ((find(arr.begin(), arr.end(), x) != arr.end()) ? "YES\n" : "NO\n");
}


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t1;
  cin >> t1;

  while(t1--) {
    playBattle();
  }

  return 0;
}

```
