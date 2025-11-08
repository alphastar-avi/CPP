/*You are working on a number sequence puzzle. You have an array A, that is supposed to contain all the numbers from 1 to N, but you realize one number is missing. The array might have been shuffled, so the numbers are not in order. Your task is to find and return an integer value representing the missing number from the sequence.



Input Format

Input 1: An integer value N representing the length of the sequence

Input 2: An integer array A



Output Format

Return an integer value representing the missing number from the sequence.



Example 1

Sample Input 1

5

3 1 2 5



Sample Output 1

4



Explanation

Here, A = {3, 1, 2, 5} and N = 5. The sequence should contain the numbers from 1 to 5 but the number 4 is missing from the array A. Hence, 4 is returned as the output.



Example 2

Sample Input 2

4

2 3 4



Sample Output 2

1



Explanation

Here, A = {2, 3, 4} and N = 4. The sequence should contain the numbers from 1 to 4 but the number 1 is missing from array A. Hence, 1 is returned as the output.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missing(vector<int> &nums, int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int x : nums) sum += x;
    return total - sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n - 1; i++) {
        cin >> nums[i];
    }

    cout << missing(nums, n) << endl;
    return 0;
}