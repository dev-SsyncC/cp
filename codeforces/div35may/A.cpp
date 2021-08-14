#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    stack<char>st;
    string s;cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!=st.top()){
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}