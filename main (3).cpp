#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int i;
  int xi;
  xi=1;
  int num;
  for (int k = 0 ; k < N;k++){
  
    cin >> i;
    if ( i<xi ){
      
      num+= (xi-i)*2;  
      xi=i;
    } else if (  i>xi ) {
      num+=(i-xi)*3;
      xi=i;
    }
    

  }
  cout << num;

}