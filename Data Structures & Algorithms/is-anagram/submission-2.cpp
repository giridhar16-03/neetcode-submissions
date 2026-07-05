class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> a;
        unordered_map<char, int> b;
        if(s.size() != t.size()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            a[s[i]]++;
            b[t[i]]++;
        }
        return a == b;
    }
};
