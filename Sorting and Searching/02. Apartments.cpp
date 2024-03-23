#include <bits/stdc++.h>
#define elif else if
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;//cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        for(auto &i: a)cin >> i;
        for(auto &i: b)cin >> i;
        sort(b.begin(), b.end());
        sort(a.begin(), a.end());

        int ans = 0, i = 0, j = 0;
        while(i < n && j < m){
            if(abs(a[i] - b[j]) <= k) {
                i++, j++, ans++;
            }else{
                if(a[i] - b[j] > k) {
                  j++;
                }else{
                  i++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


