#include<iostream>

using namespace std;

int main(){
    long long x;
    cin >> x;

    long long low=1, high=x, ans;

    while(low<=high){
        long long mid = low + (high-low)/2;

        if(mid*mid==x){
            cout<<mid;
            return 0;
        }
        else if( mid*mid<x){
            ans = mid;
            low = mid+1;
        } 
        else{
            high = mid-1;
        }

    }
    cout << ans;
    return 0;
}