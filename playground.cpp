#include<iostream>

using namespace std;
int fb(int n){
if(n==1 || n==0){
    return n;
}
return fb(n-1)+fb(n-2);
}

int main(){
cout << fb(0);
}