#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int r,o,c;
    cin>>r>>o>>c;
    int leftovers = 20-o;
    int balls = leftovers*6;
    int target = r-c;
    if(target<balls*6){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}