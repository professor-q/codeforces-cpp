#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, m, x;
    cin >> n >> m;
    map<int, bool> mp;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        mp[x] = true;
    }

    for (int i = 0; i < m; ++i) {
        cin >> x;
        if (mp[x]) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }
    
    return 0;
}