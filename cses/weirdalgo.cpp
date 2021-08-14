#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long int>v;
    long long int n; cin>>n;
    v.push_back(n);
    while(n!=1){
        if(n%2==0){
            n/=2;
            v.push_back(n);
        }
        else{
            n=(n*3)+1;
            v.push_back(n);
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }
}