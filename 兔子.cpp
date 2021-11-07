#include <iostream>
#include <math.h>
using  namespace std;

int main(){
  int m;
  cin >> m;
  int n;
  cin >> n;
  int d;
  cin >> d;
  int a = 0;
  int g = d;
  int h = d;
  while(g > 0 and h > 0){
    g = g- m ;
    h = h -n;
    if (g%n ==0  and g/n >= 1 ){
      a = 1 ;
    }else if (h%m ==0  and h/m >= 1){
      a = 1 ;
    }
    if (d%m == 0 ){
      a = 1 ;
    }else if (d%n ==0  ){
      a = 1 ;
    }
  }
  if (a==1){
    cout << "yes" ;
  }else{
    cout  <<"no";
  }
}