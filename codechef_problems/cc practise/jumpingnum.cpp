#include<iostream>
using namespace std;
void jumpingnum(int x){
    int second = x%10;
    x/=10;
    if(second-x==1){//if both ways use abs
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
}
int main(){
    jumpingnum(65);
}