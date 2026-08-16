class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(const char &ch : s){
            freq[ch]++;
        }
        vector<pair<char,int>> freqVector(freq.begin(),freq.end());
        sort(freqVector.begin(),freqVector.end(),
        [](const auto& a, const auto& b){
            return a.second > b.second;
        });

        string ans;
        for(auto [ch, count] : freqVector){
            ans.append(count, ch);
        }

        return ans;

    }
};