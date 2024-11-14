#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, k = 0;
    cin >> n; 
    int temp = n;

    while (temp > 0) {
        k = k * 10 + temp % 10;
        temp /= 10;
    }

    if (k == n) {
        cout << k << endl;
        cout << "YES" << endl;
    } else {
        cout << k << endl;
        cout << "NO" << endl;
    }

    return 0;
}
