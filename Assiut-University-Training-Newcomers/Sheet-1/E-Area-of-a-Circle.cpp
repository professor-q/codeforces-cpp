#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    float r, area;
    float pi = 3.141592653;
    cin >> r;

    area = pi * r * r;
    cout << fixed << setprecision(9) << area << '\n';

    return 0;
}
