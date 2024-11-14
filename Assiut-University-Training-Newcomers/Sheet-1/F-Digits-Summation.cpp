#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    unsigned long long n, m;
    cin >> n >> m;

    cout << (n % 10) + (m % 10) << '\n';
    
    return 0;
}
