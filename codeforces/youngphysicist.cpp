#include<bits/stdc++.h>
using namespace std;
int main(){
    int first,second,third;
    first=second=third=0;
    int a =0;
    int n;cin>>n;
    int arr[n*n];
    for(int i=0;i<n*n;i++){
        cin>>arr[i];
    }
    while(a<=n*n-1-2){
        first+=arr[a];
        second+=arr[a+1];
        third+=arr[a+2];
        a+=3;
    }
    if(first == 0 && second ==0 && third==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}