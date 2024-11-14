#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    float n, k;
    cin >> n;
    k = (int)n;

    if (k == n) {
        cout << "int " << k << '\n';
    } else {
        cout << "float " << k << " " << n - k << '\n';
    }
    
    return 0;
}
