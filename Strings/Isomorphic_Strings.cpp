#include<iostream>
using namespace std;

int main(){
    string s = "foo";
    string t = "bar";

    int StoT[128] = {0};
    int TtoS[128] = {0};

    for(int i = 0; i < s.length(); i++){
        char c1 = s[i];
        char c2 = t[i];

        if(StoT[c1] == 0 && TtoS[c2] == 0){
            StoT[c1] = c2;
            TtoS[c2] = c1;
        }
        else {
            if(StoT[c1] != c2 || TtoS[c2] != c1){
                cout << "false";
                return 0; 
            }
        }
    }

    cout << "true";  
    return 0;
}
