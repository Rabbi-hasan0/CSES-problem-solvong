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
        int l = 0, k = 0;
        for(auto &i: a) {
            cin >> i;
            vp.push_back({i, ++k}); 
        }
        sort(a.begin(), a.end());
        sort(vp.begin(), vp.end());
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                k = j + 1, l = n - 1; 
                while(k < l) {
                    int sum = a[i] + a[j] + a[k] + a[l];
                    if(sum == x) {
                        cout << vp[i].second << ' ' << vp[j].second << ' '
                        << vp[k].second << ' ' << vp[l].second << '\n';
                        return 0;
                    }
                    if(sum > x) l--;
                    else k++;
                }
            }
        }
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}
