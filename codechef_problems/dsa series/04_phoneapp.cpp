#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int arr[T];
    for(int i=0;i<T;i++){
        cin>>arr[i];
    }
    sort(arr,arr+T);
    int max=0;
    for(int i=0;i<T;i++){
        arr[i]=arr[i]*(T-i);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}