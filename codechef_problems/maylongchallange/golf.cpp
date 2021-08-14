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
    ll n,x,k;
    cin>>n>>x>>k;
    if((x%k==0)||((n+1)-x)%k==0){cout<<"Yes\n";}
    else{cout<<"NO\n";} 
}
}