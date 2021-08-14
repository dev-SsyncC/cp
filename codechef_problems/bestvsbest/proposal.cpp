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
    string arr[] = {"0","sunday","monday","tuesday","wednesday","thursday","friday","saturday",};

    string day;cin>>day;
    int time;cin>>time;
    
    

    if(day=="sunday"){
        cout<<arr[(1+time)%7]<<endl;
    }
    if(day == "monday"){
        cout<<arr[2+time%7]<<endl;
    }
    if(day == "tuesday"){
        cout<<arr[3+time%7]<<endl;
    }
    if(day == "wednesday"){
        cout<<arr[4+time%7]<<endl;
    }
    if(day == "thursday"){
        cout<<arr[5+time%7]<<endl;
    }
    if(day == "friday"){
        cout<<arr[6+time%7]<<endl;
    }
    if(day == "saturday"){
        cout<<arr[7+time%7]<<endl;
    }
}
}