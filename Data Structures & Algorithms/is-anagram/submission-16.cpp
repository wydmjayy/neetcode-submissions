class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp1;
        map<char,int> mp2;
        for(auto &it : s){
            mp1[it] += 1;
        }
        for(auto &it : t){
            mp2[it] += 1;
        }

        if(s.length() != t.length()) return false;

        for(auto &it : mp1){
            if(mp1[it.first] != mp2[it.first]){
                return false;
            }
        }
        return true;
    }
};
