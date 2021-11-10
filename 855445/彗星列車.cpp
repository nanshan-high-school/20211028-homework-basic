#include <iostream>
using namespace std;
int main() {
  int A,S,T;
  cin >> A >> S;
  T = S / A;
  if (S % A != 0){
    T = T+1;
    cout << T;
  }
  else{
  cout << T;
}
}

