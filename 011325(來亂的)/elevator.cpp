#include <iostream>
using namespace std;

int main() {
    int times;
    cin >> times;
    int l[times+1];
    // cin
    l[0] = 1;
    for (int i = 1; i <= times; i++) {
        cin >> l[i];
    }

    int total = 0;
    for (int i = 0; i < times; i++) {
        if (l[i] > l[i+1]) {//下樓
            total += 2*(l[i]-l[i+1]);
        } else {
            total += 3*(l[i+1]-l[i]);
        }
    }
    cout << total;
}
