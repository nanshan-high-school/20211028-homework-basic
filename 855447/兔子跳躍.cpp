using namespace std;
#include <iostream>

int main() {
  int N;
  int M;
  int D;
  int ans=0;
  cin >> N;
  cin >> M;
  cin >> D;
  if (N > M) {
    int f; //可能跳的次數(最大)
    f = D % M;
    for (int i=1;i<=f;i++){
      int k;
      k = D-N*i;
      if (k%M==0) {
        ans=1;
        break;
      }
    }
  }else{
    int f; //可能跳的次數(最大)
    f = D / N;
    for (int i=1;i<=f;i++){
      int k;
      k = D-M*i;
      if (k%N==0) {
        ans=1;
        break;
      }  
    }  
  }
  if (D < N && D < M){
    ans=0;
  }
  if (ans==1){
    cout << "YES";
  }else {
    cout << "NO";
  }
} 