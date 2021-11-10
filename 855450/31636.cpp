using namespace std;
#include <iostream>

int main() {
  int A;
  int S;
  int answer;
  cin >> A;
  cin >> S;
  if (S%A==0){
    answer=S/A;
    cout << answer;
  }else{
    answer=S/A+1;
    cout << answer;
  }
} 