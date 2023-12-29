#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;

void playBattle() {

  int N;
  cin >> N;
  string S;
  cin >> S;
 
  S = " " + S;
 
  for(int i=1; i<=N; i++) {
    if(i+3 > N) {
      
      for(int j=i; j<=N; j++) {
        cout << S[j];
      }
      cout << "\n";
      return;
    }
    
    
    if(S[i+3] == 'a' || S[i+3] == 'e') {
      
      // CV
      for(int j=i; j<=i+1; j++) {
        cout << S[j];
      }
      cout << '.';
      i = i+1;
    }
      
    else {
        
      // CVC
      for(int j=i; j<=i+2; j++) {
        cout << S[j];
      }
      cout << '.';
      i = i+2;
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
