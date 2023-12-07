## [C. Reach Codetown (1022)](https://www.codechef.com/problems/CODETOWN)


### Implementation - 01

```cpp
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;

bool vowel(char c) {
  return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

bool reach(const string& s) {
    
  const string ctown = "CODETOWN";

  for (int i=0; i<s.length(); ++i) {
      
    if (s[i] != ctown[i]) {
        
      if (vowel(s[i]) == vowel(ctown[i])) {
        continue;
      } else {
        return false;
      }
    }
  }
  return true;
}


int main() {
    
    
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    
  int t;
  cin >> t;

  for (int i = 0; i < t; ++i) {
    string s;
    cin >> s;

    bool result = reach(s);
    cout << (result ? "Yes" : "No") << std::endl;
  }

  return 0;
}
```

</pre>

<pre><strong>Time Complexity: </strong> O(t * n)
  - O(1) for initial setup and input (including variables and loop initialization)
  - O(t) for the main loop iterating over test cases
  - O(n) for the reach function iterating over each string
  - O(1) for constant operations within the loop
  
<strong>Space Complexity:</strong> O(1)
  - O(1) for variables and constants in memory
  - O(1) for local variables within the functions
</pre>

<br>

## Implementation - 02 

```cpp

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;


void playBattle() {

  map<char, int> vow;
  vow['A'] = vow['E'] = vow['I'] = vow['O'] = vow['U'] = 1;
    
  string s;
  cin>>s;
 
  int f = 1;
 
  f &= (!vow[s[0]] && vow[s[1]] && !vow[s[2]] && vow[s[3]] && !vow[s[4]] && vow[s[5]] && !vow[s[6]] && !vow[s[7]]);
 
  cout << (f ? "Yes\n" : "No\n");

}

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

```

</pre>

<pre><strong>Time Complexity: </strong> O(t1)
  
- The time complexity of the playBattle function mainly depends on the length of the input string s, 
  which has a fixed length of 8 characters in this case. The operations within the function are constant time, 
  so the overall time complexity of the playBattle function is O(1).

   -- O(1) for initializing the vow map
   -- O(1) for checking vowels for each character in the string (constant lookup in the map)
   -- O(1) for printing the output
   -- O(t1) for the main loop iterating over test cases
  
<strong>Space Complexity:</strong> O(1)
  - O(1) for variables and constants in memory
  - O(1) for the vow map storing vowel information
</pre>
