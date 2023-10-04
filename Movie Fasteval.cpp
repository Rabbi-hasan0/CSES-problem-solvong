#include<bits/stdc++.h>
using namespace std;

int32_t main() {

   int n;
   cin >> n ;
   vector<pair<int, int>> p;
   for(int i = 1; i <= n; i++){
    int x, y;
    cin >> x >> y;
    p. push_back({x, y});
   }
   sort(p.begin(), p.end(), [] (pair<int, int>x, pair<int, int>y){
         return x.second < y.second;
   });

   /*for(auto [i, t]: p){
     cout << i << ' ' << t <<'\n';
   }*/

   int cnt = 0; int endd = -1;
   for(int i = 1; i < n; i++){

     if(p[i].first >=endd /*p[i - 1].second*/){
       cnt ++;
       endd = p[i].second;
     }
   }
   cout << cnt+1 <<'\n';

  return 0;
}
