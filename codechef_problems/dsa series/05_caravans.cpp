#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

        int T;
        cin>>T;
        while (T--)
        {
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
                cin>>arr[i];

            int count = 1;
            int max=arr[0];
            for(int i=1;i<n;i++){
                if(arr[i]<=max){
                    count++;
                    max=arr[i];
                }
            }
            cout<<count<<"\n";    
        }
        
}    