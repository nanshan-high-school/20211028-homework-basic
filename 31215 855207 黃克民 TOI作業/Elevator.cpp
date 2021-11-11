#include <iostream>

using namespace std;

int main() {
  int n , i , x;
  int a = 0 , sum = 0;
  cin >> n;
  for (i = 0 ; i < n ; i++ ) {
    int cache = 0;
    cin >> x;
    if (a==0) {
      cache = x-a-1;
      sum += 3*cache;
      a = x;
    }
    if (x >= a) {
      cache = x-a;
      sum += 3*cache;
    } else {
      cache = a-x;
      sum += 2*cache;
    }
    a = x;
  }
  cout << sum;
}