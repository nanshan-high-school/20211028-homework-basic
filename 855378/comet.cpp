#include <iostream>
using namespace std;
int main() {
  int s , t;
   
  cin >> s;
  cin >> t;

  if (t % s == 0){
  cout << t / s;
  }

  if (t % s != 0){
  cout << int(t / s) + 1;
  }
} 