#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int ans=0;
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=k;i++){
         ans = max(ans,n%i);
        }
        cout<<ans<<endl;
    }
}