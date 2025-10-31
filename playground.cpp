class Solution {
public:
    /**
     * Main function to start the combination search.
     */
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // This vector will store all valid combinations that sum to the target.
        vector<vector<int>> allResults;
        // This vector will store the combination we are currently building
        // (e.g., [2, 2] as it goes down the tree).
        vector<int> currentCombination;
        // Start the recursive backtracking process.
        // We begin with the full target, an empty combination, and start searching from index 0.
        findCombinations(candidates, target, allResults, currentCombination, 0);
        return allResults;
    }

private:
    /**
     * This is the recursive helper function that implements the decision tree logic.
     *
     * @param candidates - The array of numbers to pick from.
     * @param target - The remaining sum we still need to achieve.
     * @param allResults - The final list to add valid combinations to.
     * @param currentCombination - The path we have taken so far (e.g., [2, 2]).
     * @param startIndex - The index in 'candidates' from which to start our search.
     * This is key to preventing duplicate combinations (like [2,3] and [3,2]).
     */
    void findCombinations(vector<int>& candidates, int target, vector<vector<int>>& allResults, vector<int>& currentCombination, int startIndex) {
        
        // --- Base Cases ---

        // 1. SUCCESS: (Like the green checkmark for [7] in your image)
        // If the target is 0, we've found a valid combination that sums perfectly.
        if (target == 0) {
            allResults.push_back(currentCombination);
            return; // Stop exploring this path.
        }
        
        // 2. FAILURE/PRUNE: (Like the red circled numbers in your image)
        // If the target is negative, we've gone over the required sum.
        if (target < 0) {
            return; // Stop exploring (backtrack).
        }
        
        // --- Recursive Step (Explore) ---

        // Loop through the candidates, starting from 'startIndex'.
        for (int i = startIndex; i < candidates.size(); ++i) {
            
            // 1. CHOOSE: Add the current candidate to our path.
            currentCombination.push_back(candidates[i]);
            
            // 2. EXPLORE: Recursively call the function for the next level.
            // - The new target is 'target - candidates[i]'.
            // - We pass 'i' as the new 'startIndex' (not i+1) because
            //   we are allowed to reuse the *same* number (e.g., [2, 2, ...]).
            findCombinations(candidates, target - candidates[i], allResults, currentCombination, i);
            
            // 3. UNCHOOSE (Backtrack): Remove the candidate we just added.
            // This is crucial. It allows us to "go back up" the tree and
            // try the next branch (e.g., after exploring [2,2,3], we pop '3',
            // pop '2', and then try [2,3,...]).
            currentCombination.pop_back();
        }
    }
};


