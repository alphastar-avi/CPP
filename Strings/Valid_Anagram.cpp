#include <iostream>
#include <string>

using namespace std;

int main() {
     string s = "anagram";
     string t = "nagaram";

    unordered_map<char,int> smap;
    unordered_map<char,int> tmap;

    for( int i; i<s.size(); i++){
        smap[s[i]]++;
        tmap[t[i]]++;
    }

    for ( auto i : smap){
        if( smap[i.first] != tmap[i.first]){
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}