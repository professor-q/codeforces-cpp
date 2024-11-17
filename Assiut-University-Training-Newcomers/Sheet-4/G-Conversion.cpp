#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str;
    getline(cin , str);

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ',') {
            str[i] = ' ';
        } else if (str[i] >= 'a' and str[i] <= 'z') {
            str[i] = str[i] - 32;
        } else {
            str[i] = str[i] + 32;
        }
    }

    cout << str << '\n';

    return 0;
}
