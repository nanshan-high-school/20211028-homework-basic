#include <iostream>
#include <math.h>
using  namespace std;

int main(){

  int A;
  cout << "請輸入目的地距離 : ";
  cin >> A;
  int S;
  cout << "請輸入速率 : ";
  cin >> S;

  float a=A;
  float s=S;
  
  cout << "所需時間 : " << ceil(a/s); 
}