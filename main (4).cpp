#include <iostream>
using namespace std;

int main() {

  int A;
  cin >> A;
  int S;
  cin >> S;
  int s;
  if (S>0 and S%A==0 and A>0) {
    s = S/A;
    cout << s ;
  } else if (S%A!=0) {
    s=S/A+1;
    cout << s ;
  }

  
 
}
