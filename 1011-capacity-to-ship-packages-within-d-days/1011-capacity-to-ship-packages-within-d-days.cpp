class Solution {
public:
    int shipWithinDays(vector<int>& wght, int days) {
        int l = *max_element(wght.begin(), wght.end());
        int r = find_sum(wght);
        int ans = r;
        while(l <= r){
            int mid = l + (r-l)/2;

            if(can_ship(wght, mid, days)){
                r = mid-1;
                ans = min(ans, mid);
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
    int find_sum(vector<int>& arr){
        int sum = 0;
        for(int i = 0;i < arr.size(); i++){
            sum += arr[i]; 
        }
        return sum;
    }
    bool can_ship(vector<int>& arr, int cap, int days){
        int d = 1;
        int current_weight = 0;
        
        for (int weight : arr) {
            if (current_weight + weight > cap) {
                d++;               
                current_weight = 0; 
            }
            current_weight += weight;
        }
        
        return d <= days;
    }
};