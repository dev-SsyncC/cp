#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>v;
    int n;cin>>n;
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0){
                v.push_back(i);
            }
        }
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                v.push_back(i);
            }
        }
        for(auto x:v){
            cout<<x<<" ";
        }
    }
}