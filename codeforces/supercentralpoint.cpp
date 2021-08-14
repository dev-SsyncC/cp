#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);

int n;cin>>n;
int x[n],y[n];
for(int i=0;i<n;i++){
    cin>>x[i]>>y[i];
}
int point=0;
for(int i=0;i<n;i++){
    int up,low,l,r;
    up= low = l = r =0;
    for(int j=0;j<n;j++){
        if(x[j]>x[i] && y[j]==y[i])r++;
        if(x[j]<x[i] && y[j]==y[i])l++;
        if(x[j]==x[i] && y[j]<y[i])low++;
        if(x[j]==x[i] && y[j]>y[i])up++;
    }
    if(up>0 && low>0 && r>0 && l>0)point++;
    }
    cout<<point<<endl;
}