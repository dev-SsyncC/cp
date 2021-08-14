#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int count=0;
    long long int n; cin>>n;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(long long int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            while (arr[i-1]!=arr[i])
            {
                arr[i]++;
                count++;
            }
        }
    }
    cout<<count<<"\n";
}