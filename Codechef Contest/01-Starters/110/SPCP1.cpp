#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
 
 /*
 ------------------------------------------------------------------------------------------------------------------------
 as we know that for a person to pass through the water park he should have atmost W kg weight and atleast H cm height, 
 So any value of 
  - W which is more than or equal to 60kg and 
  - any value of H which is less than or equal to 130 cm would allow chef to go through the water park
  ------------------------------------------------------------------------------------------------------------------------
 */
 
  int t1, t2; 
  cin >> t1 >> t2;
  
  if(t1 >= 60 && t2 <= 130 ) {
      cout << "Yes";
  } else {
      cout << "No";
  }


  return 0;
}
