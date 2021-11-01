#include <iostream>
using namespace std;

int main() {
    int A;
    int S;
    cin >> A;
    cin >> S;
    if(S/A==0){
        cout << S/A;
    } else {
        cout << S/A+1;
    }
}