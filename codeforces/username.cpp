#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int count = 0;
    int t;cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int max,min;
    max = min = arr[0];
    for(int i=1;i<t;i++){
        if(max>arr[i]){
            count++;
            max=arr[i];
        }
        if(min<arr[i]){
            count++;
            min=arr[i];
        }
    }
    cout<<count<<endl;
}