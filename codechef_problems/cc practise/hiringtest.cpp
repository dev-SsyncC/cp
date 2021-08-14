#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int t;cin>>t;
while(t--)
{
    vector<int>v;
    int n,m;
    cin>>n>>m;
    int x,y;
    cin>>x>>y;
    for(int i=0;i<n;i++){
        int countf,countp,county;
        countf = 0;countp=0;county=0;
        for(int j=0;j<m;j++){
            char m;cin>>m;
            if(m=='F'){
                countf++;
            }
            if(m=='P'){
                countp++;
            }
        }
        if(countf>=x || (countf>=x-1 && countp>=y)){
            v.push_back(1);
        }
        else{
            v.push_back(0);
        }
    }
    for(auto num:v){
        cout<<num;
    }
    cout<<endl;
}
}