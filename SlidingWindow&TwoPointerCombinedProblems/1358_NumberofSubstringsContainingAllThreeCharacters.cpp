class Solution {
public:
    int numberOfSubstrings(string s) {
       int lastseen[3]={-1,-1,-1}, count=0;
       for(int i=0; i<s.size(); i++){
        lastseen[s[i]-'a']=i;
        if(lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1){
            int minLast = min({lastseen[0],lastseen[1],lastseen[2]});
            count += (1 + minLast);
        }
       }
       return count;

    }
};


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