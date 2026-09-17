class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        // s.erase(remove(s.begin(), s.end(), ' '), s.end());
        for(char &it : s){
            if(isalnum(it)){
                t += tolower(it);
            }
            
        } 
        int p1 = 0;
        int p2 = t.size() - 1;
        while(p1 <= p2){
            if(t[p1] != t[p2]){
                return false;
            }
            p1++;
            p2--;
        }
        return true;
    }
};
