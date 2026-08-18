class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j = 0;
        vector<int>arr = {0,0};
        for(int i=1;i<nums.size();i++){
            if(nums[i] + nums[j] == target){
                 arr[0] = j;
                 arr[1] = i;
                 break;
            }
            if(j <= nums.size() - 1){
                j++;
            }else{
                j = 0;
            }
        }
        return arr;
    }
};
