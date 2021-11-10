#include <iostream>
using namespace std;
int main() {
  int jump1;
  cin >> jump1;
  int jump2;
  cin >> jump2;
  int jump;
  cin >> jump;
  int a=0;
  int b=0;   
  int c=1;
  int d=1; 
  int ans=0; 
  while (1) { 
    if (ans==jump){
      cout << "Yes";
      break;
    }
    a+=1;
    c=jump1*a;
    if (c>jump){
      cout << "No";
      break;
    }
    while (1){
      b+=1;
      d=jump2*b;
      ans=c+d;
      if (ans>=jump){
        b=0;
        break;
      
      }


    }
  }
    


  
} 