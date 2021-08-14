#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int count=0;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=n;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<count<<"\n";
}