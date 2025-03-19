```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        long long n, k;
        cin >> n >> k;
        
        if (n % 2 == 0 || (n - k) % 2 == 0)  // we took y = 0 or y = 1
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}

// tc - O(1)
// sc - O(1)
```
