class Solution {
public:
    int compress(vector<char>& chars) {
        int write=0;
        int read=0;
        int cnt;

        while(read<chars.size()){
            char current = chars[read];
            cnt=0;
            while(read<chars.size() && chars[read]==current){
                read++;
                cnt++;
            }
            chars[write++]=current;
            if(cnt>1){
                string s = to_string(cnt);
                for(char ch : s){
                    chars[write++]=ch;
                }
            }

        }
        return write;
    }
};