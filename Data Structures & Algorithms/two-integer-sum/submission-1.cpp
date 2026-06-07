class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int diff = target - nums[i];

            if(um.count(diff)){
                return {um[diff],i};
            }

            um[nums[i]] = i;
        }
        return {};
    }
};
