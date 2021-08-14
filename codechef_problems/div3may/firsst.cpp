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
    int x, m,d;
    cin>>x>>m>>d;
    cout<<min(x*m,x+d)<<endl;
}
}