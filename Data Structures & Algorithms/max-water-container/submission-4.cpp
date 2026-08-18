class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        vector<int> res;
        while(l<r){
            int max_water = (r-l) * min(heights[l] , heights[r]);
            res.push_back(max_water);
            if(heights[r] < heights[l]){
                r--;
            }else if(heights[r] > heights[l]){
                l++;
            }else if(heights[r] == heights[l]){
                r--;
                l++;
            }
        }
        int result = std::max(res);
        return result;
    }
};
