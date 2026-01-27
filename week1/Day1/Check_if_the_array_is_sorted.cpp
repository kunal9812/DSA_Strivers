#include<iostream>
using namespace std;

bool check(vector<int> &arr){
    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i]>arr[i+1]){
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    vector <int> arr = {2,3,4,51,6,7,8,9,10};
    cout << check(arr);
    return 0;
}