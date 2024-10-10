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
        int n; cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) cout << i << ' ';
            else v.push_back(i);
        }
        int back = -1;
        while (1) {
            vector<int> a = v;
            v.clear();
            int x = n;
            for (int i = 0; i < (int)a.size(); i++) {
                if (i % 2 == x % 2) v.push_back(a[i]);
                else {
                    cout << a[i] << ' ';
                    back = a[i];
                }
            }
            n = (back == a[a.size() - 1] ? 2 : 1);
            if (a.size() == 1) {
                if (back != v[0]) cout << v[0] << '\n';
                break;
            }
        }
    }
    return 0;
}
