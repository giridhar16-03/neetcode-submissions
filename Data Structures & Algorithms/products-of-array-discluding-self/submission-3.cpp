class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix_product(nums.size());
        vector<int> sufix_product(nums.size());
        vector<int> result(nums.size());
        prefix_product[0] = 1;
        sufix_product[nums.size()-1] = 1;
        for(int i=1;i<nums.size();i++){
            prefix_product[i] = prefix_product[i-1] * nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            sufix_product[i] = sufix_product[i+1] * nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            result[i] = prefix_product[i] * sufix_product[i];
        }
        return result;
    }


};
