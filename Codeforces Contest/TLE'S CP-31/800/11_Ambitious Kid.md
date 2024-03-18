
[1866. Ambitious Kid](https://codeforces.com/problemset/problem/1866/A)

```cpp

// give me some sunshine, give me some rain, give me another chance to grow up once again...

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  vector<int> arr(n);
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  int ops = 1e9;
  for(int i=0; i<n; i++) {
    ops = min(ops, abs(arr[i]-0));
  }
  cout << ops << "\n";

  return 0;
}

```
