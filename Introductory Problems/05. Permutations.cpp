
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a;
        for(int i = 2; i <= n; i += 2){
            a.push_back(i);
        }
        for(int i = 1; i <= n; i += 2){
            a.push_back(i);
        }
        bool have = true;
        for(int i = 1; i < a.size(); i++){
            if(abs(a[i - 1] - a[i]) < 2) {
                have = false;
                break;
            } 
        }
        if(have){
            for(auto &i: a){
                cout << i << ' ';
            }cout << '\n';
        }else{
            cout << "NO SOLUTION" << '\n';
        }
    }
    return 0;
}
