#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int leastFrequent(int arr[], int n)
{
    sort(arr, arr + n);
 
    int min_count = n+1, res = -1, curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count < min_count) {
                min_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
    if (curr_count < min_count)
    {
        min_count = curr_count;
        res = arr[n - 1];
    }
 
    return res;
}



int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;cin>>t;
while(t--)
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<leastFrequent(arr,n)<<endl;
}
}