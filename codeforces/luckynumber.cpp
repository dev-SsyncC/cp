#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll count_7=0;
    ll count_4=0;
    ll yes=0;

string s;cin>>s;
for(ll i=0;s[i]!='\0';i++){
    if(count_7+count_4==7 || count_7+count_4==4){
        cout<<"YES\n";
        yes++;
        break;
    }
    if(s[i]=='7'){
        count_7++;
    }
    if(s[i]=='4'){
        count_4++;
    }
}
if(yes<1){
    cout<<"NO\n";
}
}