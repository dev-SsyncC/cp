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
    int n;cin>>n;
    if(n==2)cout<<"NO\n";
    else{
        if(n%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
}