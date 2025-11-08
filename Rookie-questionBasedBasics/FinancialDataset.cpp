/*Financial Dataset


You are working on a financial analysing tool which represents the daily stock prices of a company over a time. Each element in an integer array A of size N represents the closing price of the stock for a particular day. Your task is to find and return an integer value representing the total number of days where the stock price decreased indicating negative growth.

Input Format

Input 1: An integer value N representing the size of array.

Input 2: An integer array A containing the closing price of the stock



Output Format

Return an integer value representing the total number of days where the stock price decreased, indicating negative growth.

Example 1

Sample Input 1

7

3 5 6 -7 9 10 -12



Sample Output 1

2



Explanation

Here, A= (3,5,6.-7,9,10,-12). The stock price decreased at -7 and 12. Therefore, 2 will be returned as output.

Example 2

Sample Input 2

3

-5 -8 -12



Sample Output 2

3



Explanation

Here, A= (-5,-8,-12). The stock price decreased at -5, -8 and -12. Therefore, 3 will be returned as output.*/

#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> nums(n);

  int count=0;
  for(int i=0; i<n; i++){
    cin >> nums[i];
  }

  int x = nums[0];
  if(x<0) count++;
  for(int i=0; i<n-1; i++){
    if(nums[i]>nums[i+1]){
      count++;
    }
  }
  cout << count;
}