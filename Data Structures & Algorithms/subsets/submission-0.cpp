class Solution {
public:
    // Helper function to handle backtracking
    void printall(vector<int>& nums, vector<int>& current, int i, vector<vector<int>>& result) {
        // Base case: if we considered all elements, save the current subset
        if (i == nums.size()) {
            result.push_back(current);
            return;
        }

        // Decision 1: Include nums[i]
        current.push_back(nums[i]);
        printall(nums, current, i + 1, result);

        // Backtrack: Remove nums[i] to try the next path
        current.pop_back();

        // Decision 2: Exclude nums[i]
        printall(nums, current, i + 1, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        
        // Start recursion from index 0
        printall(nums, current, 0, result);
        
        return result;
    }
};