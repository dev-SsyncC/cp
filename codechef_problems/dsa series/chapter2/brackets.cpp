#include<bits/stdc++.h>
using namespace std;
int main(){
    int depth=1;
    int depthcheck;
    int n;
    cin>>n;
    while(n--){
        int bracket;
        cin>>bracket;
        stack<int>s;
        if(s.empty()){
        if (bracket==1){
            s.push(bracket);
        }
        }
        if(bracket==2 && s.top()==1){
            s.pop();
            if(s.empty()){
                depthcheck=0;
            }
        }
        if(bracket==1 && s.top()==1){
            s.push(bracket);
            depth++;
        }
    }
}