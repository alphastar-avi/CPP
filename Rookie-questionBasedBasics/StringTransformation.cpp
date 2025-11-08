/*You are provided with two strings, S1 and S2. In S1, you can perform operations such as adding, removing or swapping letters. Each operation has a specific cost value associated with it, as shown below:

If a letter is removed from S1, the cost is 0

If a pair of letters are swapped in S1, the cost is 0

If a new letter is added to the end of S1, the cost is 1.

Your task is to find and return an integer value representing the minimum cost required to transform the string S1 and S2.



Note

The strings S1 and S2 consist uppercase alphabets only.



Input Format

Input 1: A string value S1 representing the first string.

Input 2: A string value S2 representing the target string



Output Format

Return an integer value representing minimum cost required to transform the string S1 into S2.



Example 1

Sample Input 1

ABD

AABCCAD



Sample Output 1

4



Explanation

Here, S1 = ABD and S2 = AABCCAD. We can perform the following steps to convert S1 into S2.

Add a new element ‘A’ at the end of S1. This will make the composition ABDA. Now swap the last ‘A’, first with ‘D’ and then with ‘B’. This will result in AABD and the cost will be 1.

Add two ‘C’s at the end. This will make the composition AABDCC. After this, swap the ‘D’ with the last ‘C’. This will result in AABCCD and the cost will be 2.

Add one ‘A’ to AABCCD to make the string AABCCDA and then swap the last ‘A’ with ‘D’. This will finally make the string AABCCAD, and the cost will be 1.

The total cost will be 4 (1 + 2 + 1). Hence 4 is returned as the output.



Example 2

Sample Input 2

ABC

XYZ



Sample Output 2

3



Explanation

Here S1 = ABC and S2 = XYZ. We can perform the following steps to convert S1 into S2.

Remove all the elements from S1 This will make it an empty string, which will cost 0.

Add X, Y and then Z, which will cost 3.

Since the total cost is 3, 3 is returned as the output.*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> f1;
    map<char, int> f2;
  
    for(int i = 0; i < s1.size(); i++){
        f1[s1[i]]++;
    }
    for(int i = 0; i < s2.size(); i++){
        f2[s2[i]]++;
    }
    
    int sum = 0, dif;
    for(auto it : f2){
        dif = it.second - f1[it.first];
        if (dif > 0) sum = sum + dif;
    }

    cout << sum;
}