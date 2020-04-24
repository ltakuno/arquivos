#include<iostream>

using namespace std;

int main(){
  int n, x, soma = 0;
  cin >> n;

  while(n){
    cin >> x;
    soma += x;
    n--;
  }

  cout << soma << endl;
  return 0;
}
