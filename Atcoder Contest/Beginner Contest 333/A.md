## [100. Three Threes](https://atcoder.jp/contests/abc333/tasks/abc333_a) 

### Intuition: 
- Print N times N

<br>

```cpp

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nline "\n"
const int MOD = 1e9 + 7;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  for(int i=1; i<=N; i++) {
    cout << N;
  }

  return 0;
}

```

<br>

### Complexity:
------------------------------------------
> <em> Time Complexity:</em>  O(N) <br>
>> Where N is the value read from the input
>
> Space Complexity: O(1)
>>  There is a constant amount of space used regardless of the input size
>
------------------------------------------
