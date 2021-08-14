#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int count =0;
    vector<int>v;
    v={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int n,m;
    cin>>n>>m;
    for(int i=0;i<v.size();i++){
        if(v[i]==n && v[i+1]==m){
            cout<<"YES\n";
            count++;
            break;
            }
        else {continue;}
    }
    if(count==0){
        cout<<"NO\n";
    }
}