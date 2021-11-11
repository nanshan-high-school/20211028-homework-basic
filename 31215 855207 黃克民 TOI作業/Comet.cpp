#include <iostream>

using namespace std;
int main() {
  int a , s;
  cin >> a;
  cin >> s;
  if (s%a!=0){
    cout << s/a+1;
  } else {
    cout << s/a;
  }
} 