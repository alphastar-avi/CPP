#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> f1;
    map<char, int> f2;
  
    for(int i = 0; i < s1.size(); i++){
        f1[s1[i]]++;
    }
    for(int i = 0; i < s2.size(); i++){
        f2[s2[i]]++;
    }
    
    int sum = 0, dif;
    for(auto it : f2){
        dif = it.second - f1[it.first];
        if (dif > 0) sum = sum + dif;
    }

    cout << sum;
}