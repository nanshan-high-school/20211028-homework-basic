#include <iostream>
using namespace std;

int main() {
int A;
int S;
cin >> S;
cin >> A;
if (A % S==0){
  cout << A/S;
} else {
  cout << A/S+1;
}
} 