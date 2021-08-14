#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int countupper=0;
    int countlower = 0;
    string s;cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=95){
            countupper++;
        }
        else{
            countlower++;
        }
    }
    if(countupper>countlower){
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>=65 && s[i]<=95){
                continue;
            }
            else{
                s[i]=s[i]-32;
            }
        }
    }
    if(countupper<countlower){
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>=65 && s[i]<=95){
                 s[i]=s[i]+32;
            }
            else{
                continue;
            }
        }
    }
    if(countupper==countlower){
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>=65 && s[i]<=95){
                 s[i]=s[i]+32;
            }
        }
    }
    cout<<s<<"\n";
}