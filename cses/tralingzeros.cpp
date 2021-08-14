#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n; cin>>n;
    ll rem,answer=0;
    while (1)
    {
        rem = n/5;
        if(rem<5){
            answer+=rem;
            break;
        }
        else{
            answer += rem;
            n/=5;
        }
    }
    cout<<answer;
}