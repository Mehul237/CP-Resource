/*
------------------------------------------------------------------------------------------------------------------------
You are the one that is responsible for who you are!                                                                   +
6-Months of FOCUS & HARDWORK can put you 5-YEARS ahead in life. Don't Underestimate the power of CONSISTENCY & DESIRE  +
------------------------------------------------------------------------------------------------------------------------

***********************
 Mehul Thuletiya      *
 CF: Mehul_Thuletiya  *
 CC: mehul_237        *
***********************

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"

void solve() {

  int ballP, sumRun=0, strikeRate=0, runM; 
  cin >> ballP;
  vector<ll> v(ballP); 

  for(ll i=0; i<ballP; i++) {
    cin >> runM;
    sumRun += runM;
    v[i] = sumRun;
  }

  for(ll i=0; i<ballP; i++) {
    if(v[i]==i+1) 
    strikeRate++;
  }

  cout << strikeRate << "\n";
}


/* 
-------------------------------------------------------------
void solve() {

  int ballP, sumRun=0, strikeRate=0, runM; 
  cin >> ballP;
  vector<ll> v(ballP); 

  for(ll i=0; i<ballP; i++) {
    cin >> runM;
    sumRun += runM;
    v[i] = sumRun;
    cout << "Sum Of Run -: " << sumRun << "\n";
  }

  for(ll i=0; i<ballP; i++) {
    cout << "i -: "<< i << "\n";
    cout << "V[i] -: " << v[i] << "\n";
    cout << "i+1 -: " << i+1 << "\n";

    if(v[i]==i+1) 
    strikeRate++;

    cout << "SR -: "<<strikeRate << "\n";
    cout << "- - - - - - - - " << "\n";
  }

  //cout << strikeRate << "\n";
}
-----------------------------------------------------------
*/


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t; cin>>t;
  while(t--) {
    solve();
  }
  return 0;

}
