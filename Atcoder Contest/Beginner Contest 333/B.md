## [200. Pentagon](https://atcoder.jp/contests/abc333/tasks/abc333_b) 

### Intuition: 
- Find min distance between two points out of clockwise and anti-clockwise.
- Compare that
- Inspiration: [Harshil Singh - IIITA, CF - M](https://atcoder.jp/users/ha___il)

<br>

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define nline "\n"
#define pb push_back
#define pi pair<int, int>
#define mp make_pair

const int MOD = 1e9 + 7;
const int INF = (int)4e18;
const int MODa = 998244353;


void playBattle() {

	char a, b, c, d;
	cin >> a >> b >> c >> d;

	int an = a - 'A';
	int bn = b - 'A';
	int cn = c - 'A';
	int dn = d - 'A';

	int xn = abs(an-bn) % 5;
	int yn = abs(cn-dn) % 5;

	if(xn == yn || xn + yn == 5){
		cout << "Yes\n";
		return;
	}
	cout << "No\n";
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t1 = 1;

  while(t1--) {
    playBattle();
  }

  return 0;
}
```

<br>

### Complexity:
------------------------------------------
> <em> Time Complexity:</em>  O(1) <br>
>
> Space Complexity: O(1)
>
------------------------------------------
