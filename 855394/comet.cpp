#include <iostream>
using namespace std;

int main( )  {
int A , S , T , num;
cin >> A >> S ;
num = S%A;
S = S+A-num;
T = S/A;
cout << T ;
}