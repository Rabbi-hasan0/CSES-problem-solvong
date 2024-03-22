#include<bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1;//cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int> part_1, part_2;
    if(n % 2 == 0){
        part_1.push_back(1);
        part_1.push_back(n);
        bool ok = true;
        for(int i = 2; i < n; i += 2){
            if(ok){
                part_2.push_back(i);
                part_2.push_back(i + 1);
                ok = false;
            }else{
                part_1.push_back(i);
                part_1.push_back(i + 1);
                ok = true;
            }
        }
    }else{
        part_2.push_back(n);
        bool ok = true;
        for(int i = 1; i < n; i += 2) {
            if(ok){
                part_1.push_back(i);
                part_1.push_back(i + 1);
                ok = false;
            }else{
                part_2.push_back(i);
                part_2.push_back(i + 1);
                ok = true;
            }
        }
    }

    long long total_sum = n * (n + 1) / 2;
    if(total_sum % 2 == 0){
        cout << "YES\n";
        cout << part_1.size() << '\n';
        for(auto &x: part_1)cout << x << ' ';
        cout << '\n' << part_2.size() << '\n';
        for(auto &x: part_2)cout << x << ' ';
        cout << '\n';
    }else{
        cout << "NO\n";
    }
  }
  return 0;
}
