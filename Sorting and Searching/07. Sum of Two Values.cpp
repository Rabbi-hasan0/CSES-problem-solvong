#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;//cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        vector<int> a(n);
        for(auto &i: a) {
            cin >> i;
        }
        
        map <int, int> mp;bool ok = true;
        for(int i = 0; i < n; i++) {
            int x = k - a[i];
            if(mp[x] != 0){
                cout << mp[x] << ' ' << i + 1 << '\n';
                ok = false;break;
            }
            mp[a[i]] = i + 1; 
        }
        if(ok){
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}


