#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        ll sum = 0;
        for(auto &i: a) {
            cin >> i;
            sum += i;
        }
        
        ll ans = LLONG_MAX;
        for(int k = 0; k < (1 << n); k++) {
            ll x = 0;
            for(int i = 0; i < n; i++) {
                if((k >> i) & 1) {
                    x += a[i];
                }
                ans = min(ans, abs(sum - 2LL * x));
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
