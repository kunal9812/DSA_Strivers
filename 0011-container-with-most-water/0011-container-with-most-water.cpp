class Solution {
public:
    int maxArea(vector<int>& height) {
        int curr_area = 0;
        int max_area = INT_MIN;
        int l = 0;
        int r = height.size()-1;

        while(l<=r){
            curr_area = min(height[l],height[r])*(r-l);
            max_area = max(curr_area, max_area);

            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return max_area;
    }
};