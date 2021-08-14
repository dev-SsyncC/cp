#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);

    int k;cin>>k;
    int arr[12];
    for(int i =0;i<12;i++)cin>>arr[i];
    sort(arr,arr+12);
    int sum =0,i=0,count=0;
    while(k>sum){
        sum+=arr[i];
        i++;
        count++;
    }
    cout<<count<<endl;
}