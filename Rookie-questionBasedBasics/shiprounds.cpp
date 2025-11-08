/*A ship needs to transport a certain number of people from Point A to Point B. The capacity of the ship is denoted by an integer C, and the total number of people to be transported is denoted by an integer N. Your task is to find and return the number of rounds the ship needs to make in order to transport all the people from Point A to Point B.



Note

One round consists of the ship travelling from Point A to Point B and then returning to Point A.



Input Format

Input 1: An integer value C representing the capacity of the ship

Input 2: An integer value N representing the total number of people transported.



Output Format

Return an integer value represents the number of rounds the ship needs to make.



Example 1

Sample Input 1

50

200



Sample Output 1

4



Explanation

Here, the ship has a capacity of 50 people and needs to transport 200 people. Since the ship can accommodate 50 people at a time, it will need to make 4 rounds to transport all the people from Point A to Point B. In each round, the ship will transport 50 people, until all 200 people are transported. Hence, 4 is returned as the output.



Example 2

Sample Input 2

30

75



Sample Output 2

3



Explanation

Here, the ship has a capacity of 30 people and needs to transport 75 people. Since the ship can accommodate 30 people at a time, it will need to make 3 rounds to transport all the people from Point A to Point B. In each round, the ship will transport 30 people, until all 75 people are transported. Hence 3 is returned as the output.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, n;
    cin >> c >> n;

    int rounds = ceil((double)n / c);
    cout << rounds;
}