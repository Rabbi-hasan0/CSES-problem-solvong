 #include <bits/stdc++.h>
 #define print(x) cout << x << '\n'
 using namespace std;
 
 int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     int t = 1;//cin >> t;
     while(t--){
        int n;cin >> n;
        vector<int> a(n);
        for(auto &i: a)cin >> i;
        multiset<int>towers;
        for(auto &i: a){
            auto it = towers.upper_bound(i);
            if(it != towers.end()) {
                towers.erase(it);
            }
            towers.insert(i);
        }
        print(towers.size());
     }
     return 0;
 }
