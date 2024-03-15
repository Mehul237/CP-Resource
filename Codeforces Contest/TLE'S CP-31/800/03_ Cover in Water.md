
[1900. Cover in Water](https://codeforces.com/problemset/problem/1900/A)

```cpp

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;

void playBattle() {

  int n;
  cin >> n;

  string str;
  cin >> str;

  int empty_cell = 0;
  bool flag = true;

  for(int i=0; i<n; i++) {
    if(str[i] == '.')
      empty_cell++;
    if( i > 0 && i < n-1) {
      if(str[i-1] == '.' && str[i] == '.' && str[i+1] == '.') {
        cout << 2 << "\n";
        flag = false;
        break;
      }
    }
  }

  // We don't find the ... in the string, and the ans is empty_cell cnt
  if(flag) {
    cout << empty_cell << "\n";
  }

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
