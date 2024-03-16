
[1890. Doremy's Paint 3](https://codeforces.com/problemset/problem/1890/A)

```cpp

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {

  int n;
  cin >> n;

  vector<int> arr;

  for(int i=0, x; i<n; i++) {
    cin >> x;
    arr.push_back(x);  // Adding elements to the vector
  }

  unordered_map<int, int> mp;
  bool yes = true;

  for(int i=0; i<n; i++) {
    mp[arr[i]]++;

    if(mp.size() > 2) {
      yes = false;
      break;
    }
  }

  if(mp.size() == 2) {

    int f1 = begin(mp) -> second; // Freq of 1st element

    if(f1 != n/2 && f1 != (n+1)/2) {
      yes = false;
    }
  }


/*
---------------------------------
  if(mp.size() == 1) {
    // yes
  } else if(mp.size() == 2) {
    // Conditon check
  } else {
    // no
  }
---------------------------------
*/


  if(yes) 
    cout << "Yes\n";
  else 
    cout << "No\n";
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
