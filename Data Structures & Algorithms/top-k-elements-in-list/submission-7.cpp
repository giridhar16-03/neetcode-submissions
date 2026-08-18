class Solution {
public:
    bool cmp(pair<int, int>& a, 
        pair<int, int>& b) 
    { 
        return a.second < b.second; 
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>a;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        for(auto i : a){
            sort(a.begin(), a.end(), cmp);
        }
        
        res.push_back(a.at(0));
        res.push_back(a.at(1));
        return res;
    }
};
