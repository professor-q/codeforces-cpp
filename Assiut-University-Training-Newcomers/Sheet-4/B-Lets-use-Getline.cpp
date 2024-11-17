#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str, s = "";
    getline(cin , str);

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == 92) 
            break;
        s += str[i];
    }

    cout << s << '\n';

    return 0;
}
