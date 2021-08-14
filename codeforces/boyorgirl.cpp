#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int count=0;
    string s;cin>>s;
    sort(s.begin(),s.end());
    for(int i=1;i<=s.length();i++){
        if(s[i-1]==s[i])continue;
        else count++;
    }
    if(count%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

}
