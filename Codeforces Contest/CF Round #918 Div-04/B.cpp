#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;



/*
-----------------------------------------------------------
There are many solutions. 
For example, look at the row with the question mark, 
and write some if statements to check the missing letter.

A shorter solution: 
- find the count of each letter
- The one that appears only twice is the missing one
-----------------------------------------------------------
*/


void playBattle() {

	int cnt[3] = {};

	for (int i=0; i<9; i++) {
		char c;
		cin >> c;
		if (c != '?') { 
            cnt [c - 'A']++; 
        }
	}	

	for (int i=0; i<3; i++) {
		if (cnt[i] < 3) { 
            cout << (char) ('A' + i) << '\n';
        }
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
