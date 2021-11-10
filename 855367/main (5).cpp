#include <iostream>
using namespace std;
int main() {
int n , m , d;  
cin >> n;
cin >> m;
cin >> d;
int a = 0;
for(int i=0 ; i * n < d; i++){
  for(int j=0 ; j * m < d ; j++){
    if(n * i + m * j == d ){
      a = 1;
      break;
    }
  }
}
if(a==1){
  cout << "yes";
}
else {
  cout << "no";
}
}