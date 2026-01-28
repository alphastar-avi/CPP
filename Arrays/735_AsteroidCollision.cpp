class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ass) {
        vector<int> res;
        for(int i=0; i<ass.size(); i++){
            if(ass[i]>0) res.push_back(ass[i]);
            else{
                while(!res.empty() && res.back()>0 && res.back()<abs(ass[i])) res.pop_back();
                if(!res.empty() && res.back()==abs(ass[i])) res.pop_back();
                else if(res.empty() || res.back()<0) res.push_back(ass[i]);
            }
        }
        return res;
    }
};