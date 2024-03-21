#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a(n);
        for(auto &i: a){
            cin >> i;
        }
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(a[i - 1] > a[i]){
                int x = a[i - 1] - a[i];
                ans += x;
                a[i] += x;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
