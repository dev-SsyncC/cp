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
    int count, n,m;cin>>n>>m;
    count =0;
    for(int a=1;a<=n;a++){
        for(int b=1;b<a;b++){
            if(((m%a)%b)==((m % b) % a)){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
}