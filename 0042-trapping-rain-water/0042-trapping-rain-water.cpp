class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int lmax, rmax, answer;
        lmax = rmax = answer = 0;
        while(l<=r){
            if(height[l]<height[r]){
                lmax = max(lmax,height[l]);
                answer += lmax - height[l];
                l++;
            }
            else{
                rmax = max(rmax, height[r]);
                answer += rmax - height[r];
                r--;
            }
        }
        return answer; 
    }
};