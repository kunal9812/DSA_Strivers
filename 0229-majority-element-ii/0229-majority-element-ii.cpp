class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int>freq;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }

        for(auto it: freq){
            if(it.second > n/3){
                ans.emplace_back(it.first);
            }
        }
        return ans;
    }
};