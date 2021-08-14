#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s,a;cin>>s;
    a="";
    sort(s.begin(),s.end());
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='+')continue;
        else{
            a.push_back(s[i]);
            if(i<s.length()-1)a.push_back('+');
        }
    }
    cout<<a<<endl;
}