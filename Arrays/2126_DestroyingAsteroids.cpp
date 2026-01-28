class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ass) {
        long long mas = mass;
        sort(ass.begin(), ass.end());
        for(int i : ass){
            if(i<=mas){
                mas += i;
            } else return false;
        }
        return true;
    }
};