#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int Xi;
  Xi = 1;
  int a = 0;
  for(int i = 0; i < N; i++) {
    int Xi2;
    cin >> Xi2;
    
    if (Xi2 - Xi > 0) {
      a += (Xi2 - Xi) * 3;
      Xi = Xi2;
    } else {
      a += (Xi - Xi2) * 2;
      Xi = Xi2;
    }
  }
cout << a;
}
