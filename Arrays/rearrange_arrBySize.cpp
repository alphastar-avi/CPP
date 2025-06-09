#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums= {3,1,-2,-5,2,-4};
    vector<int> result(nums.size());
    int posptr =0;
    int negptr =1;

    for( int pos : nums){
        if(pos>0){
            result[posptr]=pos;
            posptr += 2;
        }
        else{
            result[negptr]=pos;
            negptr += 2;
        }
    }
    for ( int res : result){
        cout << res << "," ; 
    }
    
}