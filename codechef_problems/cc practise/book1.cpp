#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string neg = s + "35";
        string fail = "9"+s +"4";
        string nc = "190"+s;

        if(s == "1" || s=="4" || s=="78")cout<<"+\n";
        else if(s==neg)cout<<"-\n";
        else if(s==fail)cout<<"*\n";
        else if(s==nc)cout<<"?\n";

    }
}