#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string s1, s2;
    cin >> s1 >> s2;

    cout << s1.length() << ' ' << s2.length() << '\n';
    cout << s1 << ' ' << s2 << '\n';
    
    return 0;
}
