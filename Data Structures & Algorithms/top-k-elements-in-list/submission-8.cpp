class Solution {
public:
    static bool cmp(pair<int, int>& a, 
        pair<int, int>& b) 
    { 
        return a.second > b.second; 
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int, int>> a(m.begin(), m.end());
        sort(a.begin(), a.end(), cmp);
        
        for(int i = 0; i < k; i++){
            res.push_back(a[i].first);
        }
        return res;
    }
};
