class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        // A set to keep track of the unique values collected.
        set<int> values;  
        // Variable to count the number of moves (operations).
        int moves = 0;    

        for (int i = nums.size() - 1; i >= 0; --i) {

             // Increment the number of moves for each operation.
            moves++; 

            // If the current element is less than or equal to k.
            if (nums[i] <= k) {  

                // Add the element to the collection (set).
                values.insert(nums[i]);  

                // If the collection contains all elements from 1 to k, return the number of moves.
                if (values.size() == k) 
                    return moves;
            }
        }
        
         // If it's not possible to collect elements 1 to k, return 0.
        return 0; 
    }
};
