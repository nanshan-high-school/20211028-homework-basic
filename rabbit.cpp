#include <iostream>
using namespace std;

int main() {
   int a , b , c ;
   cin >> a >> b >> c ;
   for (int i = 0 ; i < c ; i += a){
     if (((c-i)) % b == 0){
       cout << "YES" << '\n';
       return 0;
      }
   }
       cout << "NO" << '\n';
} 