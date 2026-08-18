class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count  = 1;
        for(int i=1;i<nums.size();i++){
            if(nums.size() == 0) return 0;
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1] + 1 || nums[i] == nums[i-1] - 1) count++;
        }
        return count;
    }
};
