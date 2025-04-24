![Screenshot 2025-04-24 154842](https://github.com/user-attachments/assets/1ee9854b-cf68-4a04-9463-051a69f9d064)


```cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n * k);
        
        for (int i = 0; i < n * k; i++) 
            cin >> v[i];

        long long pointer = n * k;
        long long sum = 0;
        
        while (k--) {
            pointer -= (n / 2 + 1);
            sum += v[pointer];
        }
        cout << sum << "\n";
    }
    
    return 0;
}


// tc - O(n*k) = O(2*10^5)
// sc - O(n*k) = O(2*10^5)

```
