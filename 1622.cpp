#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#include<vector>
#define ll long long
#define lli long long int
#define test() int t;cin>>t;while(t--)
#define nn "\n"
using  namespace  std;
/*  let's started  */
void solved()
{
    int cnt=1;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    set<string>se;
    se.insert(s);
    while(next_permutation(s.begin(),s.end()))
    {
      cnt++;
      se.insert(s);
    }
    cout<<cnt<<nn;
    for(auto it: se)
      cout<<it<<nn;
}
int main()
{
  fast();
  solved();
    return 0;
}
