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
    int D,d,a,b,c;
    cin>>D>>d>>a>>b>>c;
    if(D*d>=10 && D*d<21)cout<<a<<endl;
    else if(D*d>=21 && D*d<42)cout<<b<<endl;
    else if(D*d>=42)cout<<c<<endl;
    else cout<<0<<endl;
}
}