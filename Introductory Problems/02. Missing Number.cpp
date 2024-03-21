#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a(n - 1);
        for(auto &i: a){
            cin >> i;
        }

        sort(a.begin(), a.end());
        int ans = n;
        for(int i = 1; i < n; i++){
            if(a[i - 1] != i){
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
