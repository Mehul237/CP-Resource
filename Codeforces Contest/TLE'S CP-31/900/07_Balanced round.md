```cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        sort(a.begin(), a.end()); 

        long long counter = 1;
        long long largest_length = 1;
        
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k)
                counter++; // increment
            else
                counter = 1; // reset
            largest_length = max(largest_length, counter);
        }
        cout << n - largest_length << "\n";
    }
    return 0;
}

// tc - O(nlog2(n)) = O(2*10^5*log2(2*10^5)) = O(4*10^6)
// sc - O(n) = O(2*10^5) = O(10^6)

```
