#include <iostream>
using namespace std;

int main() {
    int a, s, ans;
    cin >> a >> s;
    ans = (s/a)+(s%a!=0);
    cout << ans;
}
