// #include<iostream>
// #include<vector>
// using namespace std;

// void print(int i, int n){
//     cout << i << endl;
//     if(i==n) {
//         return ;
//     }

// print(i+1,n);

// }

// int main(){
//     int x;
// cin >> x;
// print(1,x);


// }
#include <stdio.h>
#include <time.h>

int main() {
    clock_t start = clock();

    // Some heavy work
    for (long long i = 0; i < 100000000; i++);

    clock_t end = clock();
    double cpu_time = (double)(end - start) / CLOCKS_PER_SEC;

    printf("CPU time used: %f seconds\n", cpu_time);
    return 0;
}
