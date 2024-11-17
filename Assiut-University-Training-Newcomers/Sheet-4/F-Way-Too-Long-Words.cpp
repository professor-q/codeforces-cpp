#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, len;
    string str, abbr;
    cin >> n;

    while (n--) {
        cin >> str;
        if (str.length() <= 10) {
            cout << str << '\n';
        } else {
            len = str.length();
            abbr = str[0] + to_string(len - 2) + str[len - 1];
            cout << abbr << '\n';
        }
    }

    return 0;
}
