#include <bits/stdc++.h>
typedef long             long ll;
typedef long             double ld;
#define rep(i,n,k)       for(ll i=0;i<n;i+=k)
#define rrep(i,n,k)      for(ll i=n;i>=0;i-=k)
#define rep1(i,n,k)      for(ll i=1;i<n;i+=k)
#define vi               vector<int>
#define vl               vector<ll>
#define vs               vector<string>
#define vvi              vector<vi>
#define fast             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb               push_back
#define mp               make_pair
#define ff                first
#define se                second
#define maxn              1e6+3
#define inf               1e18
#define mod               1e9+7
#define pi               3.1415926535897932384626433832795
#define tc(t)            long long t;cin>>t;while(t--)
#define mem(dp,i)        memset(dp,i,sizeof(dp))
#define all(x)           (x).begin(), (x).end()
#define dbg(x)           cout<<x<<' = '<<x<<endl
using namespace std;
ll gcd(ll a,ll b)       {if(b==0)return a; return gcd(b, a % b);}
ll lcm(ll a,ll b)       {return (a*b)/gcd(a,b);}
ll power(ll n, ll p)
{
ll res=1;
while (p)
{
if(p%2)
res*=n,  p--;
else
n*=n ,p/=2;
}
return res;
}
void print_vector(vl v)    {for(auto i: v)  cout<<i<<' '<<endl;}
int main(){
    ll n;cin>>n;
    vl v(n),temp(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    temp = v;
    sort(all(v));
    if(count(all(v),v[0])==1){
        auto x = find(all(temp),v[0]);
        cout<<(x-temp.begin())+1<<endl;
    }
    else cout<<"Still Rozdil"<<endl;
}