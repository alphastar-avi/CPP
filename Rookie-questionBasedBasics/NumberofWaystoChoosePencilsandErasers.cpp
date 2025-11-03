#include<iostream>

using namespace std;

int fact(int n){
  int res =1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

int ncr(int N,int P){
  int res;
  int Nfact = fact(N);

  res = Nfact/(fact(N-P)*fact(P));
  return res;
}

int main(){
  int N,M,P,E;
  cin >> N >> M >> P >> E;

  cout << ncr(N,P)*ncr(M,E);
  
}