class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        int longest = 1;
        unordered_set<int> unique;
        for(int i = 0; i <n; i++){
            unique.insert(nums[i]);
        }
        for(auto it : unique){
            if(unique.find(it -1)==unique.end()){
                int count = 1;
                int x = it;
                while(unique.find(x+1)!= unique.end())
                {
                    x = x+1;
                    count++;
                }
                longest = max(longest, count);
            }
        }

        return longest;
    }
};