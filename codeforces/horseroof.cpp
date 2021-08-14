#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll>v;
    ll a,b,c,d,count=0;
    cin>>a>>b>>c>>d;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    sort(v.begin(),v.end());
    for(int i=1;i<=4;i++){
        if(v[i-1]==v[i])count++;
    }
    cout<<count<<endl;
}