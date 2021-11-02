#include <iostream>

using namespace std;

int main() 
{
  int step, stop;
  cin >> step;
  cin >> stop;

  cout << (stop / step + (stop % step != 0));
  //其實就是無條件進位實作

  return 0;
}