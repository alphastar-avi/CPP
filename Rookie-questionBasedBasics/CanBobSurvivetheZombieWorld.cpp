/*QUESTIONS

Can Bob Survive the Zombie World?


One day Bob is playing Zombie World video game. In Zombie World game each round will contain N zombies and each zombie's energy is Zi (where 1<=i<=N). Bob will start the round with B energy. In order to move to the next level Bob need to kill all the N zombie's but Bob can select any one among N Zombie's. If energy of Bob (B) is less than Zombie energy (Zi) then Bob will die and lose the round else Bob will won, during the fighting with zombie, Bob will lose his energy by (Zi%2)+(Zi/2). At any point of game Bob will play optimally. Now your task is to find out whether Bob can reach to the next level or not.



Input Format

The first line of input contain B and N, where B is the energy of Bob and N is the number of Zombies
The second line of input contain Zi, where Zi is a list containing energy of zombies separated by space


Constraints

1<=N<=10^4
1<=B<=10^9
1<=Zi<=10^5


Output Format

Print "YES" or "NO" depending upon whether Bob can reach the next level or not.



Sample Input 1

35 3

5 9 6



Sample Output 1

YES



Explanation

Bob plays optimally by killing the zombies in order of increasing loss of energy:

Zombie(5) ⇒ loss = 5%2 + 5/2 = 1 + 2 = 3 → B = 32
Zombie(6) ⇒ loss = 6%2 + 6/2 = 0 + 3 = 3 → B = 29
Zombie(9) ⇒ loss = 9%2 + 9/2 = 1 + 4 = 5 → B = 24
Since Bob never has less energy than any zombie he fights, he survives. */

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

string canSurviveOr(int B, int N, vector<int>& Zi) {
    
   sort(Zi.begin(), Zi.end());

    for (int n : Zi) {
        if (B < n){
        return "NO";
        } 
        B -= (n % 2) + (n / 2);
    }
    return "YES";
}

int main() {

    int B, N;
    cin >> B >> N;

    vector<int> Zi(N);
    for (int i = 0; i < N; i++) cin >> Zi[i];

    cout << canSurviveOr(B, N, Zi);
    return 0;
}
