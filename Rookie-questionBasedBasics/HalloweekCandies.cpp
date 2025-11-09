/*Bob goes to super market to shop candies represented by an array A for halloween party, his mother gave him some money M. Due to the festive season, there are several offers in the supermarket. One such offer useful for Bob is, if the price of the candy is a multiple of 5, he can buy it without spending any money otherwise he will spend money equal to Ai which is the price of a particular candy. Bob can shop as long as he has money. Your task is to find and return the maximum number of candies Bob can buy.



Note

Assume 1 - based indexing.



Input Format

Input 1: An integer value, representing number of candies

Input 2: An integer array A, representing once of candy

input3: An integer value M, representing the amount of money.



Output Format

Return the number of candies Bob can buy.



Example 1

Sample Input 1

3

5 5 105

16



Sample Output 1

3*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    cin >> m;

    sort(A.begin(), A.end()); 

    int count = 0;
    for (int price : A) {
        if (price % 5 == 0) count++;          
        else if (m >= price) {                
            m -= price;
            count++;
        } else break;                         
    }

    cout << count;
    return 0;
}