class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;

        for(int i = 1; i <= n; i++){
            if(n%i == 0){
                factors.emplace_back(i);
            }
        }
        int ans = -1;
        if(factors.size() < k){
            return - 1;
        }
        else{
            ans = factors[k-1]; 
        }
        return ans;
    }
};