/*
QUESTION
In a concert hall, there are certain N number of seats arranged in a single row stored in array A, where 0 indicates an empty seat and 1 indicates obstruction. You need to accommodate a group of fans. Your task is to find and return an integer value representing the maximum number of fans that can be seated.



Input Format

Input 1: An integer value N representing the number of seats in a row.

Input 2: An integer array A representing the seating row.



Output Format

Return an integer value representing the maximum number of fans that can be seated.



Example 1

Sample Input 1

7

0 1 0 0 1 0 0



Sample Output 1

5



Explanation

Here, the given row is {0, 1, 0, 0, 1 0, 0}, we can make 1 person seated at index 0. After the obstruction at index 1, there are two available seats. We can use both seats, and after this we can make 5 fans sit in this row. Therefore, 5 is returned as the output.



Example 2

4

1 1 1 1



Sample Output 2

0



Explanation

Here, the given row is {1, 1, 1, 1} we see there are no available seats. Therefore, 0 is returned as the output.
*/

#include<iostream>

using namespace std;

int main(){
  int n;

  cin >> n;
  int count=0;
  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    if(x==0) count++;
  }
  cout << count;
  
}