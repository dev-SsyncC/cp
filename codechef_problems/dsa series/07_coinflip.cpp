#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int g;
        cin>>g;
        for(int i=0;i<g;i++){
            int face,chances,ans;
            cin>>face>>chances>>ans;
            if(chances%2==0){
                cout<<chances/2<<"\n";
            }
            else{
                if(face*ans==1 || face*ans==4){
                    cout<<chances/2<<"\n";
                }
                else{
                    cout<<chances/2+1<<"\n";
                }
            }
        }
    }      
}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int g;
        cin>>g;
        for(int i=0;i<g;i++){
          
            int count =0;
            int face,chances,ans;
            cin>>face>>chances>>ans;
            vector<int>v(chances,face);
            for(int i=0;i<chances;i++){
                for(int j=0;j<=i;j++){
                    if(v[j]==0){
                        v[j]=1;
                    }
                    else{
                        v[j]=0;
                    }
                }
            }
    
        if(ans==1){
            for(auto x:v){
            if(x==ans){
                count++;
            }
        }
        cout<<count<<"\n";
        }
        if(ans==2){
            for(auto x:v){
            if(x==0){
                count++;
            }
        }
        cout<<count<<"\n";
        }

        }
    }
          
}
*/