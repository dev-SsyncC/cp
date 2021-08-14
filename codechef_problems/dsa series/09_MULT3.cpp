#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
     ll k;
     int d0,d1;
     cin>>k>>d0>>d1;
    
     ll s = d0+d1;

        if (k == 2)
        {
            if(s%3 == 0) 
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        

        ll sum = s;
        ll groups = (k-3)/4;
        ll remaining = (k-3)%4;
        ll groupCost = (2*s)%10 + (4*s)%10 + (8*s)%10 + (6*s)%10;
        sum += groupCost*groups;


        if(k >= 3) {
            sum += s%10;
        }

        if(remaining == 1) sum += (2*s)%10;
        else if(remaining == 2) sum += (2*s)%10 + (4*s)%10;
        else if(remaining == 3) sum +=  (2*s)%10 + (4*s)%10 + (8*s)%10;



        if(sum %3 == 0) {
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
        
    }
        
	
	return 0;
} 
