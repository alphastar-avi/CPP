#include <iostream>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int res=0;

    for( int i=0; i<s.size() ; i++){
    int arr[26]={0};

        for( int j=i; j<s.size() ; j++){
            arr[s[j]-'a']++;

            int max_f = 0;
            int min_f = INT_MAX;

            for( int k=0; k<26; k++){
                if(arr[k]>0){
                    max_f = max( max_f, arr[k]);
                    min_f = min( min_f, arr[k]);
                }
            }
            res += (max_f-min_f);
        }
    }
    cout << res;
}