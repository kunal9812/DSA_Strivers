class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>freq;
        for(int i = 0; i < size(nums); i++){
            freq[nums[i]]++;
        }
        for(auto it : freq){
            if(it.second > (size(nums)/2)){
                return it.first;
            }
        }
        return -1;
    }
};