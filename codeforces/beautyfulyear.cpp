#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
int t;cin>>t;
if(t<2013){
    cout<<2013;
}
else{
        while(1){
            t++;
            int a = t / 1000;
            int b = t / 100 % 10;
            int c = t / 10 % 10;
            int d = t % 10;
            if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){break;}
        }
    
    cout<<t;
}
}