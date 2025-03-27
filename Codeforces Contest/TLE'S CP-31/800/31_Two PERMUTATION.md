<hr>

![Screenshot 2025-03-27 140507](https://github.com/user-attachments/assets/6262e79d-fce3-49ff-8eb2-e8600f1459fa)

![image](https://github.com/user-attachments/assets/0c5b7930-10dd-4ffc-8cf4-cf535656135e)

<hr>

# Learning
1. Prefix
2. Suffix
3. Permutation

```cpp
#include <iostream>
#include <vector>
using namespace std;

int longestCommonPrefix(const vector<int>& p, const vector<int>& q) {
    int lcp = 0;
    while (lcp < p.size() && lcp < q.size() && p[lcp] == q[lcp]) {
        lcp++;
    }
    return lcp;
}

int longestCommonSuffix(const vector<int>& p, const vector<int>& q) {
    int lcs = 0;
    int i = p.size() - 1;
    int j = q.size() - 1;
    while (i >= 0 && j >= 0 && p[i] == q[j]) {
        lcs++;
        i--;
        j--;
    }
    return lcs;
}

int main() {
    vector<int> p = {1, 2, 3, 4};
    vector<int> q = {1, 3, 2, 4};

    int lcp = longestCommonPrefix(p, q);
    int lcs = longestCommonSuffix(p, q);

    cout << "Longest Common Prefix: " << lcp << endl;
    cout << "Longest Common Suffix: " << lcs << endl;

    return 0;
}
```

## Solution

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
  // Write here!
  int n, a, b;
  cin >> n >> a >> b;

  if ((a + b <= n - 2) || (a == n && b == n)) {
      cout << "Yes\n";
  } else {
      cout << "No\n";
  }
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
