#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        string s;
        cin>>s;
        for(int i=0;s[i]!=0;i++){
            int c=s[i]-48;
            sum += c;
        }
        cout<<sum<<"\n";
    
    }
}