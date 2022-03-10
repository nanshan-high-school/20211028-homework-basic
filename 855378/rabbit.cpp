#include <iostream>
using namespace std;
int main() {
  int n, m, d, sum;
  int i = 0;
  cin >> n;
  cin >> m;
  cin >> d;
  while (i*n < d){
    if (n > d or m > d){
      cout << "NO";
      break;
    }
    if ((d - i*n)%(m) == 0){
      cout << "YES";
      break;
    }else{
      i++;
    }
    if ((d - i*n)%(m) != 0 and i*n > d){
      cout << "NO";
      break;

    }

  }

} 