#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for(auto &i: a){
            cin >> i;
        }
        sort(a.begin(), a.end());
        int i = 0, j = n - 1, ans = 0;
        int sum = 0, cnt = 0;
        while(i <= j) {
            if(sum + a[j] <= x && cnt < 2){
                sum += a[j--];
                cnt++;
            }
            else if(sum + a[i] <= x && cnt < 2){
                sum += a[i++];
                cnt++;
            }
            else{
                ans++; sum = 0;
                cnt = 0;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}
