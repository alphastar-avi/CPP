#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3};
    
    vector<vector<int>> sub {{1}};
    for(int num : nums){
        int n = sub.size();
        // for(int i; i<n; i++){
        //     cout << sub[i];
        // }
        for ( auto v : sub){
            for( int i : v){
                cout << i << endl;
            }
        }
    }


}
