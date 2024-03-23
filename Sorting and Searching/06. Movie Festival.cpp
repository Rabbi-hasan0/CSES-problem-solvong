#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.second < b.second;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int, int>> vp;
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            vp.push_back({x, y});
        }
        
        sort(vp.begin(), vp.end(), cmp);
        int ans = 0, time = 1;
        for(auto [x, y]: vp){
            if(time <= x){
                ans++;
                time = y;
            } 
        }
        cout << ans << '\n';
    }
    return 0;
}
