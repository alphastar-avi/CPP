/*
Alice has a collection of songs represented as a string S where each character represents a song. A playlist is a substring of the given string with exactly K number of songs. She wants to create a playlist that contains maximum number of her favourite song which is 'a'. Your task is to find and return an integer value representing the maximum number of favourite songs that she can get in a single playlist.



Input Format

Input 1: A string value S representing the collection of songs.

Input 2: An integer value K representing the number of songs in the playlist.



Output Format

Return an integer value representing the maximum number of favourite songs that she can get in a single playlist.



Example 1

Sample Input 1

abaca

3



Sample Output 1

2



Explanation

Here, the given collection of songs is "abaca" and K is 3. Now, all the possible playlists of K songs are "aba", "bac", "aca". There are 2 playlist among these playlists that contains maximum of two favourite songs i.e. 'a'. Therefore 2 is returned as the output.



Example 2

Sample Input 2

bcdefgfedcb

5



Sample Output 2

0



Explanation

Here, the given collection of songs is "bcdefgfedcb" and K is 5. As we can see, there is no favourite song i.e 'a'. Therefore 0 is returned as the output.*/

//Sliding window
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S; 
    int K;
    cin >> S >> K;  // Input: string and playlist length

    int countA = 0, maxA = 0;

    // Count 'a' in the first window of size K
    for (int i = 0; i < K && i < S.size(); ++i)
        if (S[i] == 'a') countA++;

    maxA = countA;  // first maximum

    // Now slide the window
    for (int i = K; i < S.size(); ++i) {
        if (S[i - K] == 'a') countA--;  // remove left char
        if (S[i] == 'a') countA++;      // add right char
        if (countA > maxA) maxA = countA;  // update max
    }

    cout << maxA;  // print the result
    return 0;
}



//brut-force
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;  // number of songs in playlist
    cin >> s >> k;

    int maxCount = 0;

    for (int i = 0; i <= s.size() - k; i++) {
        int count = 0;
        for (int j = i; j < i + k; j++) {
            if (s[j] == 'a') count++;
        }
        maxCount = max(maxCount, count);
    }

    cout << maxCount;
    return 0;
}
