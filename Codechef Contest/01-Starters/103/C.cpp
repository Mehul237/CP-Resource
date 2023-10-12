#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void solve() {
    
    string A, B;
        
    for(int i=0; i<3; i++) {
        int x; 
        cin >> x;
        
        A += '0' + x; 
    }
        
        
    for(int i=0; i<3; i++) {
        int x; 
        cin >> x;
        
        B += '0' + x;
    }

    sort(A.begin(), A.end(), greater<char>());
    sort(B.begin(), B.end(), greater<char>());

    if(stoll(A) > stoll(B)) {
        cout << "Alice\n";
    } else if(stoll(B) > stoll(A)) {
        cout << "Bob\n";
    } else {
        cout << "Tie\n";
    }
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t1; 
  cin >> t1;

  while(t1--) {
    solve();
  } 

  return 0;
}
