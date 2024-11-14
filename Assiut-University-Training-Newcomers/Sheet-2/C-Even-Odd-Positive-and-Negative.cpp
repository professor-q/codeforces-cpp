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
    int even = 0, odd = 0;
    int pos = 0, neg = 0;
    cin >> n;

    while (n--) {
        cin >> x;
        if (x > 0) {
            pos++;
        } else if (x < 0) {
            neg++;
        }
        x = abs(x);
        if (x % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Even: " << even << '\n';
    cout << "Odd: " << odd << '\n';
    cout << "Positive: " << pos << '\n';
    cout << "Negative: " << neg << '\n';
    
    return 0;
}
