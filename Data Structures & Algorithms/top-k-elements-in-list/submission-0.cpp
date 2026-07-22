class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> count;
        for(int x :nums){
            count[x]++;
        }

        vector<pair<int , int>> arr;
        for(const auto y : count){
            arr.push_back({y.second , y.first});
        }
        sort(arr.rbegin() , arr.rend());

        vector<int> res;

        for(int i = 0 ; i < k ; i++){
            res.push_back(arr[i].second);
        }
        return res;
    }
};
