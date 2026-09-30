class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        vector<int>freq(nums.size()+1,0);
        for(int i = 0; i < nums.size(); i++){
            if(freq[nums[i]] == 0){
                freq[nums[i]] = 1;
            }
            else{
                ans.emplace_back(nums[i]);
            }
        }
        return ans;
    }
};