#include <iostream>
using namespace std;

int main() {
int N;
int Elec = 0;
int x1;
int x2;
cin >> N;
cin >> x1;
Elec += 3*(x1-1);
for (int i = 1; i < N; i++)
{
  cin >> x2;
  if (x1 > x2){
    Elec += 2*(x1 - x2);
  }else if (x1 < x2){
    Elec += 3*(x2 - x1);
  } else {
    continue;
  }
  x1 = x2;
}
cout << Elec;
} 