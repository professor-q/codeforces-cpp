#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
        if (a > b) {
            swap(a, b);
        }
    }

    cout << a << ' ' << c << '\n';

    return 0;
}
