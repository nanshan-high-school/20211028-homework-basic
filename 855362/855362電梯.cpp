#include <iostream>
using namespace std;
int main() {
  int b =1;
  int c=0;
  int L;
  cin >> L;
  for (int i=0;i<L;i++){
    int a;
    cin >> a;
    if (a-b>0){
      c=c+3*(a-b);
    } else {
      c=c-2*(a-b) ;
    }
    b=a;
  }
  cout <<c;
} 