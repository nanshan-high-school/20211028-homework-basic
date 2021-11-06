#include <iostream>
using namespace std;
int main() {
  int level,a,total;
  level = 1;
  total=0;
  a=0;
  cin >> total ;
  for (int i=0;i<total;i++){
  int b;
  cin >> b ;
  if (b-level>0){
    a+=(b-level)*3;
  }
  else{
    a+=(level-b)*2;

  }
  level=b;
  }
  cout << a << '\n';
  }
   
 