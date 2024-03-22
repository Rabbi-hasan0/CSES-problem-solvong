#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        vector<string> vs;
        do{
            vs.push_back(s);
        }while(next_permutation(s.begin(), s.end()));

        cout << vs.size() << '\n';
        for(auto s: vs)cout << s << '\n';
    }
    return 0;
}
