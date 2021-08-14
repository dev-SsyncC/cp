#include<iostream>
using namespace std;
int main(){
    int count=0;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                if(i==0 ||i==4){
                    count+=2;
                }
                if(i==1 || i==3){
                    count+=1;
                }
                if(j==0 ||j==4){
                    count+=2;
                }
                if(j==1 || j==3){
                    count+=1;
            }
        }
    }
}
cout<<count;
}