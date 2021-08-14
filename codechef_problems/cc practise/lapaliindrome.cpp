#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        string s;
        cin>>s;
        if(s.length()%2==0){
            string l=s.substr(0,(s.length()%2)-1);
            cout<<l;
        }
    }
}