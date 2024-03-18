
[1862. Sequence Game](https://codeforces.com/problemset/problem/1862/B)


```cpp

// give me some sunshine, give me some rain, give me another chance to grow up once again...

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {

	int n;
	cin >> n;
	
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	
	vector<int> ans = {a[0]};
	for(int i=1; i<n; i++) {
		if(a[i] < ans.back()) {
			ans.push_back(1);
		} 
		ans.push_back(a[i]);
	}
	cout << ans.size() << "\n";
	
	for(auto it : ans) {
		cout << it << " ";
	} cout << "\n";     
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

``
