#include<iostream>
#include<algorithm>
using namespace std;
int main (){
 int arr[100]={12,324,12,23,23,12,234,24,245,12,213,224,23,325,234,235,24,54,24,322,32,4,232,3,12,324,534,64,86,563};
 int max = arr[0];
 int n = sizeof(arr) / sizeof(arr[0]);

 for ( int i=1; i<n; i++){
    if(arr[i]>max){
        max = arr[i];
    }
    
 }
 cout << max;
}