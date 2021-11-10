using namespace std;
#include <iostream>

int main() {
  int N;
  int SF; //一開始樓
  SF = 1 ;
  int answer;
  answer = 0;
  cin >> N;
  for (int i=0;i<N;i++){
    int NF; //目前樓
    cin >> NF;

    if (NF - SF > 0) {
      answer += (NF - SF)*3;
      SF=NF;  
    } else {
      answer += (SF - NF)*2;
      SF=NF;
    }
  }
cout << answer;
} 