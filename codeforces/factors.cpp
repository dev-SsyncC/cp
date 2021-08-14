#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int arr[] = {2,4,6};
    int n = 3;
    ll num = 1;
    for(ll i=0;i<n;i++){
        num*=arr[i];
    }
    ll count = 0;
    for(ll i=1;i<=sqrt(num);i++){
        if(num%i==0){
            if(num/i==i){
                cout<<i<<" ";
                count++;
            }
            else{
                cout<<i<<" "<<num/i<<" ";
                count+=2;
            }
        }
    }
    cout<<endl;
    cout<<count;
}