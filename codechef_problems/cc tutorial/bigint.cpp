#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int fact(int i){
    int ans ;
    if(i==0 or i==1){
        return 1;
    }
    else{
        ans = fact(i-1)*i;
    }
}

int main()
{
int t;cin>>t;
cout<<fact(t);
}