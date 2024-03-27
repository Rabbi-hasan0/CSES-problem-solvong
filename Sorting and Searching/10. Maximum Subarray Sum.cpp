#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;//cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        for(auto &i: a) {
            cin >> i;
        }
        
        ll ans = a[0], cur = ans;
        for(int i = 1; i < n; i++) {
            cur = max(a[i] * 1LL, cur * 1LL + a[i]);
            ans = max(ans, cur);
        }
        cout << ans << '\n';
    }
    return 0;
}


