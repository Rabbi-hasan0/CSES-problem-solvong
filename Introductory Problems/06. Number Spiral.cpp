#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;cin >> t;
    while(t--){
      int y, x; cin >> y >> x;
      int mx = max(y, x);
      if(mx == y){
         if(y % 2 == 0){
            cout << (y *1LL* y) - (x - 1) << '\n';
         }else{
            y -= 1;
            cout << (y *1LL* y) + (x) << '\n';
         }
      }else{
        if(x & 1){
            cout << (x *1LL* x) - (y - 1) << '\n';
        }else{
            x -= 1;
            cout << (x *1LL* x) + (y) << '\n';
        }
      }
    }
    return 0;
}
