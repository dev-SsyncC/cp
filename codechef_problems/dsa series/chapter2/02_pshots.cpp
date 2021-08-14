#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int countA=0;
        int countB=0;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<2*n;i++){
            if(i==(2*n)-2){
                if(countA-countB>=2 || countB-countA>=2){
                    cout<<i<<"\n";
                    break;
                }
                else{
                    cout<<2*n<<"\n";
                }
            }
            if(i%2==0){
                if(s[i]=='1'){
                    countA++;
                }
            }
            else{
                if(s[i]=='1'){
                    countB++;
                }
            }
        }
    }
}