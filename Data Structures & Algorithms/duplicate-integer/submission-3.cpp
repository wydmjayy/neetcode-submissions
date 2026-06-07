class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int> mp;
       for(auto it : nums){
            mp[it] += 1;
        }   
        for(auto it : nums){
            if(mp[it] > 1){
                return true;
            }
        }   
        return false;
       

    }
};