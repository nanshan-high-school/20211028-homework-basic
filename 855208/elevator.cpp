#include <iostream>

using namespace std;

int energyCacl(int nowFloor, int prevFloor);

int main()
{
  int times;
  cin >> times;

  int prevFloor = 1;  //start from first floor
  int totalEnergy = 0;

  for(int i = 0; i < times; i++)
  {
    int nowFloor;
    cin >> nowFloor;
    
    totalEnergy += energyCacl(nowFloor, prevFloor);

    prevFloor = nowFloor;
  }

  cout << totalEnergy << endl;
}

int energyCacl(int nowFloor, int prevFloor)
{
  int upFloor = 3, downFloor = 2;
  
  if(prevFloor > nowFloor)
  {
    return (prevFloor - nowFloor) * downFloor;
  }
  else
  {
    return (nowFloor - prevFloor) * upFloor;
  }
}