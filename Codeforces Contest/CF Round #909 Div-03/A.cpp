#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


// Date: 18-11-2023, Next day Ind vs Aus CWC-2023 Final in Ahmedabad


void playBattle() {
    
  int num; 
  cin >> num;

  cout << (num % 3 != 0 ? "First" : "Second") << '\n';
 
}


/*
-------------------------------------------------------------------------------
  int num;
  cin >> num;
 
  if((num  % 3) != 0) {  
    cout << "First\n"; 
  }
  else {
    cout << "Second\n";
  }
-------------------------------------------------------------------------------
*/


 
int main() {
 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int t1; 
  cin>>t1;
 
  while(t1--) {
    playBattle();
  } 
 
  return 0;
}
