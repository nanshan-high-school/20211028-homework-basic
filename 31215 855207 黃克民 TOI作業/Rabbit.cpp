#include <iostream>

using namespace std;


int main() {
  int n , m , d , i , x;
  int cache = 0;
  cin >> n;
  cin >> d;
  cin >> m;
  for (i = 0; ; i++ ){
    x = n*i;
    cache = m-x;
    cout << cache;
    if (cache < 0) {
      cout << "NO";
      break;
    } else if (cache % d == 0) {
      cout << "YES";
      break;
    }
  }
}