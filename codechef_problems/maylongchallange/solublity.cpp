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
    int x,a,b;
    cin>>x>>a>>b;
    cout<<(a+(100-x)*b)*10<<endl;
}
}