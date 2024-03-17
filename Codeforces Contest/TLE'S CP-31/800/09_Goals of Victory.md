
[1877. Goals of Victory](https://codeforces.com/contest/1877/problem/A)

```cpp

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {
  
  int n;
  cin >> n;

  vector<int> arr(n-1);
  int sum = 0;

  for(int i=0; i<n-1; i++) {
    cin >> arr[i];
  }

  for(int i=0; i<n-1; i++) {    
    sum += arr[i];
  }
  // int sum = accumulate(arr.begin(), arr.end(), 0);

  cout << -sum << nline;
}

// Crystal clear problem explain by: https://youtu.be/dK8Eft0FgCw?feature=shared


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
