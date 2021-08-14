#include<iostream>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    while(cases--){
    int count =0;
    int div =5;
    int number;
    cin>>number;
    while(number/div!=0){
        count+=number/div;
        div*=5;
    }
    cout<<count<<"\n";
    }   
}