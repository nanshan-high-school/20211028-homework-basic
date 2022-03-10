#include <iostream>
using namespace std;
int main() {
  int n ;
  int odn = 1;
  int nwn;
  int sum = 0;
  cin >> n;
  for(int i = 0;i < n;i++){
    cin >> nwn;
    if (odn < nwn){
      sum += 3*(nwn - odn);
      odn = nwn;

    }else{
      sum += 2*(odn - nwn);
      odn = nwn;
    }
  
  }
  cout << sum;
} 