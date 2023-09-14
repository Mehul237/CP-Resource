
// Link -> https://www.codechef.com/START100A/problems/SURPLUS

#include <bits/stdc++.h>
using namespace std;

void solve() {
	
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	
	int total_export = a1 + b1;
	int total_import = a2 + b2;
	
	if(total_import > total_export) {
	    cout << "YES" << endl;
	} else {
	    cout << "NO" << endl;
	}
	
}

int main() {
    
	int t = 1;
	cin >> t;
	
	for(int _t = 1; _t <= t; _t++) {
		solve();
	}
	
	return 0;
}











// ------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void solve() {
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int ans = (a-b) + (c-d);
    
    if (ans < 0)
        cout << "Yes" << "\n";
     else 
        cout << "No" << "\n";

}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t1; 
  cin>>t1;

  while(t1--) {
    solve();
  } 

  return 0;
}
