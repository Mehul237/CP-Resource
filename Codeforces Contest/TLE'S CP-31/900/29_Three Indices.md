```cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long t;
    cin >> t;
    
    while (t--) {
        
        long long n;
        cin >> n;
        vector<long long> a(n);
        
        for (long long i = 0; i < n; i++) 
            cin >> a[i];

        int flag = 0;
        
        for (int j = 1; j < n - 1; j++) {
            int i = -1;
            int k = -1;
            
            for (int left = 0; left < j; left++) {
                if (a[left] < a[j]) {
                    i = left;
                    break;
                }
            }
            
            for (int right = j + 1; right < n; right++) {
                if (a[right] < a[j]) {
                    k = right;
                    break;
                }
            }
            
            if (i != -1 && k != -1) {
                cout << "YES" << "\n";
                cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
                flag = 1;
                break;
            }
        } 
        
        if (flag == 0)
            cout << "NO" << "\n";
    }
    
    return 0;
}


// tc - O(n^2) = O(10^6)
// sc - O(n) = O(1000)

```
