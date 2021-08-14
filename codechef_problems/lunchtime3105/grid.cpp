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
    ll a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    ll first = abs(a-c);
    ll second = abs(b-d);
    ll ans  = first+second;
    if(ans==k)cout<<"YES\n";
    else if((k>ans && ans%2!=0 && k%2!=0 && k!=1))cout<<"YES\n";
    else if((k>ans && ans%2==0 && k%2==0))cout<<"YES\n";
    else cout<<"NO\n";
}
}