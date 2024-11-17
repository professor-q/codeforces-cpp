#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str;
    int ans = 0;
    cin >> str;

    for (int i = 0; i < str.length(); ++i) {
        ans = ans + str[i] - 48;
    }

    cout << ans << '\n';

    return 0;
}
