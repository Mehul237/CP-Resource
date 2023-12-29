#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;

void playBattle() {

  int n;
  cin >> n;

  ll sum = 0;
  
  // calculating sum of all elements
  for(int i=0, x; i<n; i++) {
    cin >> x;
    sum += x;
  }

  // Implement sqrt fn using Binary search
  ll l = 1, r = 1e9;
  while (l < r) {
    ll mid = (l + r) >> 1;
    if (mid * mid < sum) l = mid + 1;
    else r = mid;
  }

  cout << (l * l == sum ? "Yes\n" : "No\n");


/*
----------------------------------------------------------
  ll l = 1, r = 1e9, ans = 0;
  
  while(l <= r) {

    ll mid = (l+r) >> 1;
    if(mid * mid <= sum) {
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
  }

  cout << (ans * ans == sum ? "Yes\n" : "No\n");
----------------------------------------------------------
*/

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
