class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if we have already seen the required matching number
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i}; 
            }
            
            // If not found, remember this number and its index
            seen[nums[i]] = i;
        }
        
        // This prevents the NZEC warning/error entirely
        return {}; 
    }
};
