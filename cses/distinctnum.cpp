#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;cin>>n;
    set<ll>s;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}