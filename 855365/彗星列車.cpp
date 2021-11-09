#include <iostream>
using namespace std;

int main() {
  int speed, total;

  cin >> speed;
  cin >> total;

  if (total%speed == 0){
  cout << total/speed;
  }

  if (total%speed != 0){
  
  cout << int(total/speed) +1;
  }

  }
