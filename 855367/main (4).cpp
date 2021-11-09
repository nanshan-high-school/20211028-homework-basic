#include <iostream>
using namespace std; 
int main() {
  int n;
 
  cin >> n;
  int c[n];
  if (n == 0) {
    cout << "0" ;
  } 
  else if (n == 1) {
    cout << "1" ;
  } 
  else if (n > 1) {
   
    c[0] = 1;
    c[1] = 2;
    for(int i = 2 ; i < n ; i++)
    c[i] = c[i-1] + c[i-2];
  }
  cout << c[n-1] ;
} 