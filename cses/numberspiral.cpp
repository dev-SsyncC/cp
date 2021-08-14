#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t; cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x<y){
           ll answer;
           if(y%2!=0){
               answer=(y*y)-x+1;
           }
            else{
                   answer =((y-1)*(y-1))+x;
               }
            cout<<answer<<"\n";   
        }
        else{
            ll answer;
            if(x%2!=0){
                answer = (x-1)*(x-1)+y;
            }
            else{
                answer = (x*x)-y+1;
            }
            cout<<answer<<"\n";
        }
    }
}