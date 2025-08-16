class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        for(int i=0; i<s.size(); i++){
            int arr[3]={0};
            for(int j=i; j<s.size(); j++){
                arr[s[j]-'a'] = 1;
                if(arr[0]+arr[1]+arr[2]==3){
                count += s.size()-j;
                break;

                }
            }
        }
        return count;
    }
};