#include<iostream>
#include<string>
using namespace std;
int main (){

string s = "4276";
int n = s.size();

for( int i=n-1; i>=0; i--){
    if((s[i]-'0')%2 ==1 ){
        cout << s.substr(0,i+1);
        break;
    }
}

}