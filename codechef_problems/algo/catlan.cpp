#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll catlan(ll n){
    if(n<=1)
    return 1;

    ll res =0;
    for(int i=0;i<n;i++){
        res += catlan(i)*catlan(n-i-1);
    }
    return res;
}

int main()
{
int t;cin>>t;
while(t--)
{
    ll i;cin>>i;
    cout<<catlan(i)<<"\n";
}
}