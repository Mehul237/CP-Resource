
[1896. Jagged Swaps](https://codeforces.com/problemset/problem/1896/A)

```cpp

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {
  
  int n;
  cin >> n;

  vector<int> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << (arr[0] == 1 ? "YES\n" : "NO\n");
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
