#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    char ch;
    cin >> ch;

    if (ch >= 97 and ch <= 122) {
        cout << "ALPHA\nIS SMALL" << endl;
    } else if (ch >= 65 and ch <= 90) {
        cout << "ALPHA\nIS CAPITAL" << endl;
    } else if (ch >= 48 and ch <= 57) {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}
