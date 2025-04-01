```cpp

/*
------------------------------------------------------------------------------------------------------------------------
You are the one that is responsible for who you are!                                                                   +
6-Months of FOCUS & HARDWORK can put you 5-YEARS ahead in life. Don't Underestimate the power of CONSISTENCY & DESIRE  +
------------------------------------------------------------------------------------------------------------------------

***********************
 Mehul Thuletiya      *
 CF: Parzival_237     *
 CC: mehul_237        *
***********************

*/


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define nline "\n"
const int MOD = 1e9 + 7;


void parzival_237() {

  // According to problem take input here,
  ll n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  unordered_map<char, int> freqChar;


  // Problem Logic start here,
  for (char c : s) {
    freqChar[c]++;
  }

  ll oddFreq = 0;
  for (auto it : freqChar) {
    oddFreq += (it.second & 1);
  }

  cout << (oddFreq > k + 1 ? "NO\n" : "YES\n");


  // vector<int> frequency(26, 0);
  // for (char c : s) // O(n)
  //     frequency[c - 'a']++;

  // long long odd_frequency = 0;
  // for (int freq : frequency)        // O(26) ≈ O(1)
  //     odd_frequency += (freq & 1);  // Check if frequency is odd using bitwise AND

  // cout << (odd_frequency > k + 1 ? "NO" : "YES") << endl;

}


int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t1; 
  cin >> t1;

  while(t1--) {
    parzival_237();
  } 

  return 0;
}

```
