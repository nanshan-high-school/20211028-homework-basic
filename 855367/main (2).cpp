#include <iostream>
using namespace std;
int main() {
  int N , lastF = 1;
  cin >> N ;
  int ans = 0;
  for(int i = 0 ; i < N ; i++) {
    int NowF;
    cin >> NowF;
    if (NowF>lastF) {
      ans += (NowF-lastF)*3;
  } else {
      ans += (lastF-NowF)*2;
}
lastF=NowF;
}
cout << ans;
  
}