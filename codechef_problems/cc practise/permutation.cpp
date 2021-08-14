#include<bits/stdc++.h>
using namespace std;

void permutate(string a,int l, int r){
    if(l==r){
        cout<<a<<"\n";
    }
    else{
        for(int i=l;i<=r;i++){
            swap(a[l],a[i]);

            permutate(a,l+1,r);

            swap(a[l],a[i]);

        }
    }
}

int main(){
string s = "aabac";
int n = s.size();
permutate(s,0,n-1);
return 0;
}