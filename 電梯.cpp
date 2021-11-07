#include <iostream>
using  namespace std;

int main(){
  int a;           // 按樓層次數
  int f  = 0;      // 計算樓層
  int fo = 1;      // 原來樓層
  int fn;          // 現在樓層
  int p  = 0;      // 消耗電力     

  cout << "按樓層總次數 : ";
  cin >> a;        
  while (f<a){
   cout << "請按到達樓層 : ";
   cin >> fn;
    
    if(fo<fn){
       p = p + (fn - fo) * 3;
    }else if(fo>fn){
       p = p + (fo - fn) * 2;
    }
    
    fo = fn ;
    f++;
  }
  cout << "消耗電力 : " << p;
}