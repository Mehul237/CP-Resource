
// Link -> https://codeforces.com/contest/1872/problem/A

#include <bits/stdc++.h>
 using namespace std;
 
void solveTest() {
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int diff = abs(a - b);
    cout << (diff + 2 * c - 1) / (2 * c) << "\n";
}
 
int main() {

    int t;
    cin >> t;
    while (t--)
        solveTest();
    return 0;
}
