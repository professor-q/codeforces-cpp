#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    long long n, sum;
    cin >> n;

    sum = (n * (n + 1)) / 2;
    cout << sum << '\n';

    return 0;
}
