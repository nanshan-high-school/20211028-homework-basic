#include <iostream>
using namespace std;\

int main(){
  int N , M , D ,a;
  cin >> N >> M >> D ;
  if(D%N==0&&D%M==0){
    cout << "ture" ;
  }else{
    cout << "false" ;
  }
}