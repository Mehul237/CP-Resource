#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void solve() {
    
  
/*
--------------------------------------------
  N - No. of students
  X - No. of boys
  K - No of students in each trekking group
--------------------------------------------
*/


  int N, X, K;
  cin >> N >> X >> K;

  // Calculate the remaining number of girls after forming groups
  N -= X;   // remaining girls
  
  // Calculate the remaining students after forming groups
  N %= K;   // girls 
  X %= K;   // boys

  // Output the minimum number of students who will be engaged in reading
  cout << max(N, X) - min(N, X) << "\n";
  
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
