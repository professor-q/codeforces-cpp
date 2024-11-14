#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, x;
    char ch;
    cin >> ch >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        string str(x, ch);
        cout << str << '\n';
    }

    return 0;
}
