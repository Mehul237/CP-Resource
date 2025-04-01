
```cpp

Problem
- Find the number of positions such that if a knight was placed on that cell, it would attack both the king and queen.
- Lunchbox knows that knights can be tricky, and in the version of chess that he is playing, knights are even trickier: instead of moving 1 tile in one direction and 2 tiles in the other, knights in Lunchbox's modified game move a tiles in one direction and b tiles in the other.

Complexity constraints
- 10^8 operation related to input and output and given constraints problem
- Logarithm and constant time (use case of math) is feasible solution.
- I'm able to quickly calculate the answer or I start changing my perspectives and this is what is helpful when we have discussed our expected time complexity.
- So all the redundant IDEAS in my head are removed. Specifically the idea where I could have actually taken up every cell as a position of attacking and the place the night there and manually check that is not going to work because I have infinite numbers of cells.

Input
- A, B
- King coordinate: x and y direction
- Queen coordinate: (x, y) direction

Approach
- Perspective that cell position is attacking place: If we change the perspective from Infinite chessboard checking to checks on some small set of cells. 
- Or Perspective of King that, This king can be attacked from exactly 8 positions from the knight. (At most 8, max 8). 8 cells from which knight attack king and queen. The Intersection of king and queen is actually going to give you the positions which are valid from where the knight will be able to attack both king and queen. Now all you need to do is keep track of this position and count of these positions.
- Knight perform a operation that one move one direction and other moves in other direction.

Data Structure used
- Pair: To store cells position together
- Set: Which works in log terms, Also calculate the intersection and checks be it Insertion, deletion and finding. Store unique position.

Code
- Filled up King & Queen hits
- Find intersection & count (ans)

```


<br>

# Problem: Knight Attack on King and Queen

## Objective
Find the number of positions such that if a knight was placed on that cell, it would attack both the king and queen.

## Problem Constraints
- Knights in this version of chess move `A` tiles in one direction and `B` tiles in the other (instead of the standard 1-2 move).
- The chessboard is infinite.
- Given the complexity constraint of `10^8` operations, logarithmic or constant-time solutions are preferred.

## Input
- Two integers: `A, B` (Knight's movement values)
- King’s coordinates: `(x_k, y_k)`
- Queen’s coordinates: `(x_q, y_q)`

## Approach
1. **Change Perspective to Fixed Positions:**
   - Instead of checking every possible cell on an infinite board, focus on the **8 possible attack positions** around the king.
   - If a knight moves from any of these 8 positions, it can attack the king.
   
2. **Find Common Attack Positions:**
   - Find all **knight attack positions** for both the king and queen.
   - The **intersection** of these positions gives the valid cells where the knight can attack both the king and the queen.

3. **Use Efficient Data Structures:**
   - Use a **set** to store unique attack positions (ensuring logarithmic operations).
   - Use a **pair** to store the `(x, y)` positions of cells.

---

## Implementation (C++)

```cpp
#include <iostream>
#include <set>

using namespace std;

typedef pair<int, int> pii;

// Possible knight moves based on given A, B
int dx[8], dy[8];

void generateMoves(int A, int B) {
    int moves[8][2] = {{A, B}, {A, -B}, {-A, B}, {-A, -B}, 
                       {B, A}, {B, -A}, {-B, A}, {-B, -A}};
    for (int i = 0; i < 8; i++) {
        dx[i] = moves[i][0];
        dy[i] = moves[i][1];
    }
}

set<pii> getAttackPositions(int x, int y) {
    set<pii> positions;
    for (int i = 0; i < 8; i++) {
        positions.insert({x + dx[i], y + dy[i]});
    }
    return positions;
}

int main() {
    int A, B, x_k, y_k, x_q, y_q;
    cin >> A >> B;
    cin >> x_k >> y_k >> x_q >> y_q;

    generateMoves(A, B);
    
    set<pii> kingHits = getAttackPositions(x_k, y_k);
    set<pii> queenHits = getAttackPositions(x_q, y_q);

    // Find intersection
    int count = 0;
    for (const pii& pos : kingHits) {
        if (queenHits.find(pos) != queenHits.end()) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

```


```cpp

#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long x_king, y_king;
        cin >> x_king >> y_king;
        long long x_queen, y_queen;
        cin >> x_queen >> y_queen;
        // inputs

        set<pair<int,int>> king_hits, queen_hits;

        for(int j = 0; j < 4; j++){ // 4
            king_hits.insert({x_king+dx[j]*a, y_king+dy[j]*b}); // log2(8)
            king_hits.insert({x_king+dx[j]*b, y_king+dy[j]*a});

            queen_hits.insert({x_queen+dx[j]*a, y_queen+dy[j]*b});
            queen_hits.insert({x_queen+dx[j]*b, y_queen+dy[j]*a});
        }

        int ans = 0;
        for(auto position : king_hits) // 8
            if(queen_hits.find(position) != queen_hits.end()) //log2(8)
                ans++;
        
        cout << ans << endl;
    }
    return 0;
}

// tc - O(8*log2(8)) = O(8*3) = O(24)
// sc - O(8)

```
