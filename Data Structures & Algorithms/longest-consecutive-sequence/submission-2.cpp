class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count  = 0;
        for(int i=1;i<nums.size();i++){
            if(nums.size()==1) return 1;
            if(nums[i] == nums[i-1]) count++;
            if(nums[i] == nums[i-1] + 1 ) count++;
        }
        return count;
    }
};
