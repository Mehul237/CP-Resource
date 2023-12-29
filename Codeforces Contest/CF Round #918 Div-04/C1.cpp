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

  ll res = sqrt(sum);

  cout << (res * res == sum ? "Yes\n" : "No\n");

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
