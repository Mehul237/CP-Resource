
// link -- https://cses.fi/paste/0bddef99786f9bdb6c7e09/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;

int main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
   
  // Declare variables N and sum
  ll N, sum = 0;

  // Input the value of N
  cin >> N;
  
  // Loop to read N-1 numbers
  for(int i = 1; i < N; ++i) {
    
    int ans;
    
    // Input the next number in the sequence
    cin >> ans;

    // Add the number to the running sum
    sum += ans;
  }

  // Calculate the missing number using the formula for the sum of the first N natural numbers
  // and subtract the sum of the entered N-1 numbers
  cout << N * (N + 1) / 2 - sum;

  return 0;
}

