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

    cout << a << " + " << b << " = " << a + b << '\n';
    cout << a << " * " << b << " = " << 1LL * a * b << '\n'; 
    cout << a << " - " << b << " = " << a - b << '\n'; 

    return 0;
}
