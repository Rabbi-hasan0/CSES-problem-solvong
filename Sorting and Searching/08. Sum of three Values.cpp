#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<pair<int, int>> vp;
        vector<int> a(n);
        int j = 0, k = 0;
        for(auto &i: a) {
            cin >> i;
            vp.push_back({i, ++j}); 
        }
        sort(a.begin(), a.end());
        sort(vp.begin(), vp.end());
        for(int i = 0; i < n; i++) {
            j = i + 1, k = n - 1; 
            while(j < k) {
                int sum = a[i] + a[j] + a[k];
                if(sum == x) {
                    cout << vp[i].second << ' ' << vp[j].second << ' ' << vp[k].second << '\n';
                    return 0;
                }
                if(sum > x) k--;
                else j++;
            }
        }
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}
