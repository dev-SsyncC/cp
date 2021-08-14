#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;cin>>t;
while(t--)
{
  int n;cin>>n;

  int arr[n][n];

  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>arr[i][j];
      }
  }

    int leftDiagonal=0;
    int rightDiagonal = 0;
    for(int i=0;i<n;i++){
        leftDiagonal += arr[i][i];
    }
    for(int i=0;i<n;i++){
        rightDiagonal+=arr[i][n-i-1];
    }

    if(n%2==0)cout<<leftDiagonal+rightDiagonal<<endl;  
    else cout<<(leftDiagonal+rightDiagonal)-arr[n/2][n/2]<<endl;
}
}