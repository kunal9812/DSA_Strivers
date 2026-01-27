#include<iostream>
using namespace std;

int Second_largest(vector<int> &arr){
    int lar = -1;
    int sl = -1;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i]>lar){
            sl = lar;
            lar = arr[i];
        }
        else if(arr[i] < lar && arr[i]>sl){
            sl = arr[i];
        }
    }
    return sl;
}

int main()
{
    vector <int> arr = {2,4,5,6,38,8,12,10};
    cout << Second_largest(arr);
    return 0;
}