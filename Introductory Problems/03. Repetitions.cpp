#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        string s;cin >> s;
        int ans = -1, cnt = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i - 1] == s[i]){
                cnt++;
            }else{
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        cout << max(ans, cnt) << '\n';
    }
    return 0;
}
