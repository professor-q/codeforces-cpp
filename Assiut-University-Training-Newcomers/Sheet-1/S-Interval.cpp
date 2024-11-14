#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    double x;
    cin >> x;

    if (x < 0 or x > 100) {
        cout << "Out of Intervals" << endl;
    } else if (x >= 0 and x <= 25) {
        cout << "Interval [0,25]" << endl;
    } else if (x > 25 and x <= 50) {
        cout << "Interval (25,50]" << endl;
    } else if (x > 50 and x <= 75) {
        cout << "Interval (50,75]" << endl;
    } else {
        cout << "Interval (75,100]" << endl;
    }
    
    return 0;
}
