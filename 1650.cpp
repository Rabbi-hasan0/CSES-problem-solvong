/*
  -> Using prefix sum rules;
  prefix sum tutorial link: 
        https://www.geeksforgeeks.org/prefix-sum-array-implementation-applications-competitive-programming/
*/



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+9;
int arr[N];
int main(){
    int t=1;
    //cin>>t;
    while(t--){

        int n, q;
        cin >> n >>q;
        ll a[n+5],sum=0;
        for(int i=1; i<=n; i++){
         cin>>a[i];
        }
        for(int i=1; i<=n; i++){
         sum^=a[i];
         arr[i]=sum;
        }

        while(q--){
          int l,r;
          cin>>l>>r;
          cout<<(arr[l-1] ^ arr[r])<<'\n';
        }
    }
    return 0;
}
