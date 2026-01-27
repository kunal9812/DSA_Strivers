#include <vector>
#include <algorithm>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int left = 0;
        int right = arr.size()-1;
        sort(arr.begin(),arr.end());
        while(left<right){
            if(arr[left]+arr[right] == target){
                return true;
                break;
            }
            if(arr[left]+arr[right] < target){
                left++;
            }
            if(arr[left]+arr[right] > target){
                right--;
            }
        }
        return false;
    }
};