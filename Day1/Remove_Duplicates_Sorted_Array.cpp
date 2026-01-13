#include<iostream>
using namespace std;

vector<int> remove_duplicate(vector<int> &arr){
    vector<int> arr1;
    arr1.push_back(arr[0]);
    for(int i = 0; i< arr.size(); i++){
        if(arr[i]!=arr1.back()){
            arr1.push_back(arr[i]);
        }
    }
    return arr1;
} 

void p(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<",";
    }
    cout <<endl;
}

int main()
{
    vector<int> arr = {1,2,2,4,4,5,6,7,7,8,8,8};
    vector<int> arr1 = remove_duplicate(arr);
    p(arr);
    p(arr1);
    return 0;
}