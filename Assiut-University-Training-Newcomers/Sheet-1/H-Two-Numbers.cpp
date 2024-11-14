#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int a, b;
    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << a / b << '\n';
    cout << "ceil " << a << " / " << b << " = " << (a + b - 1) / b << '\n';

    int temp = a % b;

    if (temp * 2 >= b) {
        cout << "round " << a << " / " << b << " = " << (a + b - 1) / b << '\n';
    } else {
        cout << "round " << a << " / " << b << " = " << a / b << '\n';
    }

    return 0;
}
