#include<iostream>
#include<algorithm>
using namespace std;
int main (){

string s = "(()())(())";
size_t size = s.size();
string res = "";
int id = 0;

for( int i=0; i<size; i++){
    if(s[i]=='('){
        if(id>0){
            res += s[i];
        }
        id++;
    }
    if(s[i]==')'){
        id--;
        if(id>0){
            res += s[i];
        }
    }
}
cout << res;

}