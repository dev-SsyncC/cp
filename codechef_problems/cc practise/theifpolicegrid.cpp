#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll t;cin>>t;
	while(t--){
	    ll a,b,x,y,n,m;
	    cin>>n>>m>>x>>y>>a>>b;
	    ll thef = (n-x)+(m-y);
	    ll police = ((n-a)+(m-b))-min(n-a,m-b);
	    if(thef<=police){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
