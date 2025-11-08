/*
QUESTION
You are planning a picnic for a group of friends who love math. To make it interesting, you decided to bring unique numbers of items, N. Your task is to find and return an integer value representing the sum of all the prime numbers till N. In case, the number of items is 0 or 1, return 0.

Note

Prime numbers are natural numbers that are divisible by only 1 and the number itself.



Input Format

Input 1: An integer value N



Output Format

Return an integer value representing the sum of the prime numbers till N. In case, the number of items is not prime, return 0.



Example 1

Sample Input 1

10



Sample Output 1

17



Explanation

Here, N = 10. The prime numbers between 2 and 10 are 2, 3, 5, 7 and their sum is 17. Hence, 17 is returned as the output.



Example 2

Sample Input 2

20



Sample Output 2

77



Explanation

Here, N = 20. The prime numbers between 2 and 20 are 2, 3, 5, 7, 11, 13 , 17 ,19 and their sum is 77. Hence, 77 is returned as the output.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int SumPrime(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) sum += i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << 0;
        return 0;
    }

    cout << SumPrime(n);
    return 0;
}
