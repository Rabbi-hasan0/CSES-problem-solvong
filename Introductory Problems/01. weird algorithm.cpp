

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n;cin >> n;
        while(n > 1){
            cout << n << ' ';
            if(n & 1) n *= 3, n += 1;
            else n /= 2;
        }cout << 1 << '\n';
    }
    return 0;
}
