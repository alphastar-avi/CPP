#include<iostream>
#include<vector>

int main(){
    int maxx = 0;
    std::vector<int> nums={1,2,3,4,5};
    for( int num : nums){
        maxx = maxx | num;
    }
    std::cout << maxx;
}