#include <iostream>
using namespace std;
int main() {
  int speed,total;

  cin >> speed;
  
  cin >> total;

  if (total%speed != 0){
    cout << total/speed+1;
  }
  else {
    cout << total/speed;
  }


}