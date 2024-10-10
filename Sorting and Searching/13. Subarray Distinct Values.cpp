#include <bits/stdc++.h>
#define print(x) cout << x << '\n'
#define int long long
using namespace std;
const int mod = 1e9 + 7;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n), v;
        for(int &i: a) cin >> i;

        int i = 0, j = 0, dis = 0, res = 0;
        map<int, int> mp;
        while (j < n) {
            if (mp[a[j]] == 0) {
              dis++;
            } mp[a[j++]]++; 

            while (dis > k) {
                mp[a[i]]--;
                if(mp[a[i++]] == 0) dis--;
            }
            res += (j - i);
        }
        cout << res << '\n';
    }
    return 0;
}
