//Dam of Candies
#include <algorithm>
using namespace std;
class Solution {

  public:
    int maxCandy(int height[], int n) {
        // Your code goes here
        int left = 0, right = n-1;
        int max_area = 0;
        int curr_area = 0;
        while(left<right){
            curr_area = min(height[left],height[right])*(right-left-1);
            
            max_area = max(curr_area, max_area);
            
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_area;
    }
};