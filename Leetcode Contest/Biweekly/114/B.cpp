
/* 
---------------------------------------------------------------------
Profile: https://leetcode.com/callmepandey/
Rank-2: https://leetcode.com/contest/biweekly-contest-114/ranking
---------------------------------------------------------------------
*/


class Solution {
public:
    int minOperations(vector<int>& nums) {

      // Create a map to store the frequency of each element in the array.
        map<int, int> frq;  

        // Count the frequency of each element in the array.
        for (int i : nums) {
            frq[i]++;
        }

      // Initialize the answer (minimum number of operations) to 0.
        int ans = 0;  

      
        // Iterate through the elements and their frequencies in the map.
        for (auto& a : frq) {
          
            // If there is only one occurrence of an element, it's impossible to create pairs or triples.
            if (a.second == 1) return -1;
            
            // Calculate the number of pairs of elements that can be created using a.second / 3.
            ans += a.second / 3;

            // If there are some elements remaining (a.second % 3), add one operation for them.
            if (a.second % 3) ++ans;
        }

       // Return the total minimum number of operations.
        return ans; 
    }
};









/* 
---------------------------------------------------------------------
Profile: https://leetcode.com/vassu118/
Rank-23: https://leetcode.com/contest/biweekly-contest-114/ranking
---------------------------------------------------------------------
*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
      
        map<int, int> m;  // Create a map to count the occurrences of each unique value in the array.
        
        // Count the occurrences of each unique value in the array.
        for (auto i : nums) {
            m[i]++;
        }
        
        int ans = 0;  // Initialize the answer variable to keep track of the minimum number of operations.
        
        // Iterate through the map where 'it' represents a pair (value, count).
        for (auto it : m) {
          
            if (it.second == 1) {
              
                return -1;  // If there is a unique value with a count of 1, it's impossible to perform operations.
            }
            
            // Calculate the number of operations needed for this value:
            // - Divide the count by 3 to perform the second type of operation.
            // - Add 1 if there is a remainder (to perform the first type of operation).
            ans += (it.second) / 3 + (it.second % 3 == 0 ? 0 : 1);
        }
        
        return ans;  // Return the minimum number of operations.
    }
};







/* 
---------------------------------------------------------------------
Profile: https://leetcode.com/skywalkert/
Rank-13: https://leetcode.com/contest/biweekly-contest-114/ranking
---------------------------------------------------------------------
*/



class Solution {
public:
    int minOperations(vector<int>& nums) {
      
        int ans = 0;  // Initialize the answer (minimum number of operations) to 0.
        unordered_map<int, int> ctr;  // Create an unordered_map to store the frequency of each element in the array.

        // Count the frequency of each element in the array.
        for (int x : nums) {
            ++ctr[x];
        }

        // Iterate through the elements and their frequencies in the unordered_map.
        for (auto& [k, v] : ctr) {
            // If there is only one occurrence of an element, it's impossible to create pairs or triples.
            if (v == 1)
                return -1;

            // Calculate the number of pairs and triples of elements that can be created using v / 3.
            // If there are some elements remaining (v % 3 > 0), add one operation for them.
            ans += v / 3 + (v % 3 > 0);
        }

        return ans;  // Return the total minimum number of operations.
    }
};

