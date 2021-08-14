#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main()
{

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);


        int t;cin>>t;
        while(t--)
        {
            ll sum = 0;
            ll k;cin>>k;
            for(ll i=1;i<2*k+1;i++){
                ll a , b;
                a = k+(i*i);
                b = k+((i+1)*(i+1));
                sum += gcd(a,b);
            }
            cout<<sum<<endl;
        }
}