class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count  = 1; 
        if(nums.size() == 0) return 0;
        vector<int> max_count;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1] + 1 || nums[i] == nums[i-1] - 1) count++;
            if(nums[i] != nums[i-1] + 1 || nums[i] != nums[i-1] - 1){
                max_count.push_back(count);
                count=1;
            }
        }
        return count;
    }
};
