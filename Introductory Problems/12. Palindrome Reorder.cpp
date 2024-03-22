#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; //cin >> t;
    while (t--) {
        string s; cin >> s;
        map<char, int> mp;
        for(auto &ch: s)mp[ch]++;
        
        char odd_ch = ' ';
        int cnt = 0, odd_lnth = 0;
        for(auto [x, y]: mp){
            if(y & 1){
                cnt++;
                odd_ch = x;
                odd_lnth = y;
            }
        }
        if(cnt > 1){
            cout << "NO SOLUTION\n";
            continue;
        }
        if(mp.size() == 1){
            cout << s << '\n';
        }else{
            string first, last;
            for(auto [x, y]: mp){
                if(x == odd_ch)continue;
                while(y){
                    first += x;
                    last += x;
                    y -= 2;
                }
            }
            reverse(last.begin(), last.end()); 
            while(odd_lnth--){
                first += odd_ch;
            }
            cout << first << last << '\n';
        }
    }
    return 0;
}
