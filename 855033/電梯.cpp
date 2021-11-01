#include <iostream>
using namespace std ;

int main() {
    int n;
    cin >> n;
    int last_F=1;
    int sum_power = 0;
    for (int i = 0; i < n; i++) {
        int floor;
        cin >> floor;
        int power;
        if(floor - last_F > 0) {
            power = (floor - last_F)*3;
        } else if(floor - last_F < 0) {
            power = (last_F -floor )*2;
        } else {
            power = 0;
        }
        sum_power = sum_power + power;
        last_F = floor;
    }
    cout << sum_power;
}