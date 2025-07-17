#include<iostream>

using namespace std;

int main(){
    int arr[]={-1,0,3,5,9,12};
    int target = -1;

    int start=0;
    int end=(sizeof(arr) / sizeof(arr[0]))-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            cout << mid << ":" << arr[mid];
            return 0;
        }
        if(target<arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout << "-1" << endl;
}
dd