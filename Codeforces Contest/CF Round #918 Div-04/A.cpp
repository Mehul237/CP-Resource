#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;

void playBattle() {

    int a, b, c;
    cin >> a >> b >> c;

/*  Implementation - 01

    if(a == b)         cout << c << "\n";
    else if (b == c)   cout << a << "\n";
    else               cout << b << "\n";
*/

// BitMasks | Implementation
   cout << (a ^ b ^ c) << "\n";

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
