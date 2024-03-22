
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int findZeros(int n){
    int i = 5, cnt = 0;
    while (n / i) {
        cnt += n / i;
        i *= 5;
    }
    return cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n;cin >> n;
        cout << findZeros(n) << '\n';
    }
    return 0;
}
