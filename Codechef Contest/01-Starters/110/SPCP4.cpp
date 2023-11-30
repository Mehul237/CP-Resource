#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void solve() {

/*
--------------------------------------------------------------------------------------------------------
  chef - A marbles / friend
  friend - B marbles

(1)  7  2
 - When hef has 7 marbles and his friend has 2. He can give his friend one marble. 
   Now he has 6 marbles, his friend has 3, and 6 is divisible by 3

1)  i = A marbles      (give or take which is divisible by b marbles). hova joie ae
2)  i % (a+b-i) == 0   ( 1 -- i = 6, 2 -- 6 % 3 == 0, 3 -- 7 - 6 = 1
3) a-i = take how many iteration for A




(1) Input: 7 2
- In the loop, i varies from 1 to 7 + 2 - 1 = 8
- When i = 2, the condition i % (a + b - i) == 0 is true, and the minimum value of abs(a - i) is 1
Therefore, the output is 1

(2) Input: 10 5
- In the loop, i varies from 1 to 10 + 5 - 1 = 14
- When i = 5, the condition i % (a + b - i) == 0 is true, and the minimum value of abs(a - i) is 0
Therefore, the output is 0

(3) Input: 6 5
- In the loop, i varies from 1 to 6 + 5 - 1 = 10
- When i = 6, the condition i % (a + b - i) == 0 is true, and the minimum value of abs(a - i) is 4
Therefore, the output is 4.

(4) Input: 5 6
- In the loop, i varies from 1 to 5 + 6 - 1 = 10
- When i = 5, the condition i % (a + b - i) == 0 is true, and the minimum value of abs(a - i) is 5
Therefore, the output is 5
--------------------------------------------------------------------------------------------------------
*/


   int a, b, ans = 1e9;
   cin >> a >> b;
   
   for(int i=1; i<a+b; i++) {
       if(i % (a+b-i)==0) {
           ans = min(ans, abs(a-i));
       }
   }
   cout << ans << "\n";
    
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
