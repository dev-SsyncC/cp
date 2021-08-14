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
    int n,m,k;
    cin>>n>>m>>k;
    int hash[n+m] = {0};
    vector<int>v;
    for(int i=1;i<=k;i++){
        int num;cin>>num;
        if(num>=n+1)continue;
        if(hash[num]==0)hash[num]=1;
        else{
            if(hash[num]==1){
                v.push_back(num);
                hash[num]++;
                }
        }
    }
    sort(v.begin(),v.end());
    cout<<v.size()<<" ";
    if(v.size()!=0)for(auto x:v)cout<<x<<" ";
}
}