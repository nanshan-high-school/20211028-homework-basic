#include <iostream>
using namespace std;
int main() {
  int a ;
  int s ;
  cin >> a ;
  cin >> s ;
  if (s % a == 0){
    cout << s/a ;
  } else {
    cout << (int) s/a + 1;
  } 

  
} 