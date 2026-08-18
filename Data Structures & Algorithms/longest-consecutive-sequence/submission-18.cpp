class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count  = 1; 
        if(nums.size() == 0) return 0;
        int res = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1] + 1 || nums[i] == nums[i-1] - 1) count++;
            if(nums[i] != nums[i-1] + 1 || nums[i] != nums[i-1] - 1){
                res = max(res, count);
                count=1;
            }
        }
        
        return res;
    }
};
