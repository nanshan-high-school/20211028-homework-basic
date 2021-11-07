#include <iostream>
using namespace std;

int main(){
  int A;
  int S;
  cin >> A>>S;
  if (S%A!=0){
    cout << S/A+1;
  } else {
      cout << S/A;
  }
}