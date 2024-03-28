#include <bits/stdc++.h>
#define print(x) cout << x << '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i: a) {
          cin >> i;
        }
        sort(a.begin(), a.end());
        int mid = (n + 1) / 2;
        mid = a[mid - 1];
        long long cost = 0;
        for(int i = 0; i < n; i++) {
          cost += abs(mid - a[i]);
        }
      print(cost);
   }
    return 0;
}
