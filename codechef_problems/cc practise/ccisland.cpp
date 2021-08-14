#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int t;cin>>t;
while(t--)
{
    int x,y,xr,yr,d;
    cin>>x>>y>>xr>>yr>>d;
    if(x>=d*xr && y>=d*yr){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
}