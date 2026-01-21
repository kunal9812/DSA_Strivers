#include <vector>
#include <algorithm>

using namespace std;

// Brute force method
class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        
        vector <int> temp;
        
        for(int i = 0; i < d; i++){
            temp.push_back(arr[i]);
        }
        
        for(int i = d; i < n;i++){
            arr[i-d] = arr[i];
        }
        
        for(int i = n-d; i < n; i++){
            arr[i] = temp[i - (n-d)];
        }
        
    }

    // Optimal Solution
    void Reverse(vector<int>& arr, int start, int end) {
        while(start < end) {
            swap(arr[start], arr[end-1]);
            start++;
            end--;
        }
    }

    void rotateArrOptimal(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        Reverse(arr,0,d); // Reverse first d elements 
        Reverse(arr,d,n); // Reverse elements form d to n
        Reverse(arr,0,n); // Reverse elements form 0 to n
    }
};

