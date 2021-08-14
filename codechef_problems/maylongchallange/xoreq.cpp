#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

int power2(long long x, unsigned int y, int p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
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
    ll n;cin>>n;
    ll ans = power2(2,n-1,MOD);
    cout<<ans<<endl;
}
}