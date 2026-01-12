#include<iostream>
using namespace std;

int largest_element(vector <int> &arr){
    int lar = -1; //considering all elements arr positive
    for(int i = 0; i < arr.size(); i++){
        if(arr[i]>lar){
            lar = arr[i];
        }
    }
    return lar;
}

int main(){
    vector <int> arr = {2,4,5,6,34,8,12,10};
    cout << largest_element(arr);
    
    return 0;
}