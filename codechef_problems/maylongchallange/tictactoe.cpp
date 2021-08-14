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
    string t,m,b;cin>>t>>m>>b;
    int countx,counto,count_;
    int x_wins , o_wins;
    x_wins = o_wins = 0;
    countx = counto = count_ = 0;

    for(int i=0;i<3;i++){
        if(t[i]=='X'){countx++;}
        if(m[i]=='X'){countx++;}
        if(b[i]=='X'){countx++;}

        if(t[i]=='O'){counto++;}
        if(m[i]=='O'){counto++;}
        if(b[i]=='O'){counto++;}

        if(t[i]=='_'){count_++;}
        if(m[i]=='_'){count_++;}
        if(b[i]=='_'){count_++;}
    }

    // for rows x ;
    if(t[0]=='X' && t[1]=='X' && t[2]=='X' ){x_wins++;}
    
    if(m[0]=='X' && m[1]=='X' && m[2]=='X' ){x_wins++;}
    
    if(b[0]=='X' && b[1]=='X' && b[2]=='X' ){x_wins++;}

    // for rows o;

    if(t[0]=='O' && t[1]=='O' && t[2]=='O' ){o_wins++;}
    
    if(m[0]=='O' && m[1]=='O' && m[2]=='O' ){o_wins++;}
    
    if(b[0]=='O' && b[1]=='O' && b[2]=='O' ){o_wins++;}

    // for coulumn O;

   if(t[0]=='O' && m[0]=='O' && b[0]=='O' ){o_wins++;}
   
   if(t[1]=='O' && m[1]=='O' && b[1]=='O' ){o_wins++;}
   
   if(t[2]=='O' && m[2]=='O' && b[2]=='O' ){o_wins++;}

   // for rows O;

   if(t[0]=='X' && m[0]=='X' && b[0]=='X' ){x_wins++;}

   if(t[1]=='X' && m[1]=='X' && b[1]=='X' ){x_wins++;}
   
   if(t[2]=='X' && m[2]=='X' && b[2]=='X' ){x_wins++;} 

   // for left diagonal x;
    if(t[0]=='X' && m[1]=='X' && b[2]=='X' ){x_wins++;}

    // for left diagonal o;
   if(t[0]=='O' && m[1]=='O' && b[2]=='O' ){o_wins++;}
   
   //for right diagonal x;
   if(t[2]=='X' && m[1]=='X' && b[0]=='X'){x_wins++;}
   //for right diagonal O;
   if(t[2]=='O' && m[1]=='O' && b[0]=='O'){o_wins++;}
   
   //codechef conditions ;
  
  

//    if(counto>countx){cout<<"3\n";}
//    else if(countx-counto>1){cout<<"3\n";}
//    else if((countx>counto) && (x_wins==1 && o_wins==0)){cout<<"3\n";}
//     else if((countx==counto) && (x_wins==0 && o_wins==1)){cout<<"1\n";}
//     else if(count_==0 && ((x_wins+o_wins)==0)){cout<<"1\n";}
//     else if(count_==0 && x_wins==2){cout<<"1\n";}
//     else if(count_>0 && (x_wins+o_wins==0)){cout<<"2\n";}
//     else{cout<<"3\n";}

if((x_wins==1 && o_wins==1) || (countx-counto<0)||(countx-counto>1))cout<<"3\n";
else if(countx==0 && counto==0 && count_==9)cout<<"2\n";
else if(x_wins==1 && o_wins==0 and countx>0)cout<<"1\n";
else if(x_wins==0 && o_wins==1 && countx==counto)cout<<"1\n";
else if(x_wins==0 && o_wins==0 && count_==0)cout<<"1\n";
else if(x_wins==0 && o_wins==0 && count_>0)cout<<"2\n";
else if(count_==0 && x_wins==2){cout<<"1\n";}
else cout<<"3\n";

   
//    //testing 
//    cout<<x_wins<<" "<<o_wins<<endl;
//       cout<<countx<<" "<<counto<<" "<<count_<<endl;
//       cout<<"----------------------------------------------------\n";
}
}

// char arr[3][3];
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[i][j];
//     }
// }