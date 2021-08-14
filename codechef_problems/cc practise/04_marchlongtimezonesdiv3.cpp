#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,H,x;
    cin>>N>>H>>x;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int find = H-x;
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]>=find){
            count++;
            break;
        }
        else{
            continue;
        }
    }
    if(count>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}