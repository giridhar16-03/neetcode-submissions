class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> a;
        unordered_map<char, int> b;
        if(s.size() != t.size()){
            return false;
        }else{
            for(char i : s){
                a[i]++;
            }
            for(char j : t){
                b[j]++;
            }
            for(int i=0;i<s.size();i++){
                if(a[i] != b[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
