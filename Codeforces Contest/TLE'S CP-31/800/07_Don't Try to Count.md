
[1881. Don't Try to Count](https://codeforces.com/contest/1881/problem/A)

```cpp

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {
  
  int n, m;
  cin >> n >> m;

  string x;
  cin >> x;

  string s;
  cin >> s;
  
  bool found = false;

  for(int ops=0; ops<=5; ops++) {
    if(x.find(s) != string :: npos) {
      cout << ops << nline;
      found = true;
      break;
    }
    x.append(x);  // apply operation
  }

  if(!found)  cout << -1 << nline;
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
