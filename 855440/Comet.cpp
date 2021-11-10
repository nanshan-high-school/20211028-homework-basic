#include <iostream>
using namespace std;

int main() {
  int A;
  cin >> A;
  int S;
  cin >> S;

  int n;
  n = S / A;
  if (S % A != 0) {
      cout << n+1;
  } else {
        cout << n;
  }
} 