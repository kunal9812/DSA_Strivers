#include <vector>
#include <algorithm>
using namespace std;

/*Brute force
for this we can take another array store the non zero 
elements in it and the move them in the front of the 
original array , then replace rest of elements by zero*/

// Optimal solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j == -1){
            return;
        }

        for(int i = j+1; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};