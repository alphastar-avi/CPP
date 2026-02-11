class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> cars(n);
        for(int i = 0; i < n; i++) {
            cars[i] = {position[i], speed[i]};
        }

        sort(cars.rbegin(), cars.rend());

        for(int i = 0; i < n; i++){
            double time = (double)(target - cars[i].first) / cars[i].second; //calculate target time
            if (fleets.empty()) {
                fleets.push(time);
            } 

            else if (time > fleets.top()) {
                fleets.push(time);
            }
        }
        return fleets.size();
    }
};