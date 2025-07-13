#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int tInd = 0, ans = 0, ind = 0;
        int plaS = players.size(), tS = trainers.size();
        for (; ind < plaS && tInd < tS; tInd++) {
            if (players[ind] <= trainers[tInd]) {
                ans++;
                ind++;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;

    // Example input
    vector<int> players = {4, 7, 9};
    vector<int> trainers = {8, 2, 5, 8};

    int result = solution.matchPlayersAndTrainers(players, trainers);
    cout << "Maximum number of players matched with trainers: " << result << endl;

    return 0;
}
