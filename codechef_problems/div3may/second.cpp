#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;cin>>t;
while(t--)
{
    int word=0;
    int k;cin>>k;
    for(int i=0;i<k;i++){
        int firstlang = 0;
        int secondlang = 0;
        string s;cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]>=97 && s[i]<=109)firstlang++;
            if(s[i]>=78 && s[i]<=90)secondlang++;
        }
        if(firstlang>0 && secondlang==0)word++;
        if(firstlang==0 && secondlang>0)word++;
    }
    if(word==k)cout<<"YES\n";
    else cout<<"NO\n";
}
}