#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    vector<ll>arr(n);
    for(auto &x:arr)cin>>x;
    sort(arr.begin(),arr.end());
    ll s1=0,s2=0;
    while(k--){
       s1+=arr.back();arr.pop_back() ;
       s2+=arr.back();arr.pop_back();
    }
    s2+=arr.back();
    cout<<max(s1,s2);
}
}