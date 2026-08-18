class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>a;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        for(auto i : a){
            if(i.second >= k){
               res.push_back(i.first);
            }
        }
        return res;
    }
};
