class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int lsum=0;
    for(int i=0; i<k; i++){
        lsum += cardPoints[i];
    }
    int maxsum=lsum, n=cardPoints.size(), rsum=0;

    int lef = k-1;
    for(int i=n-1; i>n-k-1; i--){
        lsum -= cardPoints[lef--];
        rsum += cardPoints[i];
        maxsum = max(maxsum, (lsum+rsum));
    }
    return maxsum;
    }

};