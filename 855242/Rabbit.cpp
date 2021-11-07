#include <iostream>
using namespace std;

int main() {
int N;
int M;
int D;
int Min;
string B = "NO";
cin >> N;
cin >> M;
cin >> D;
for (int i = 0; N*i<=D; i++){
  Min = N*i;
  if ((D-Min) % M == 0){
    B = "YES";
  }
}
cout << B;
} 