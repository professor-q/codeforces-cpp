#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n, q;
    long long arr[100002];
    arr[0] = 0;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i = 2; i <= n; ++i) {
        arr[i] = arr[i] + arr[i - 1];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << arr[r] - arr[l - 1] << '\n';
    }

    return 0;
}
