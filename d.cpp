#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter number (1-7)";
    cin>>num;
    if(num==1){
        cout<<"sunday";
    }
    else if(num==2){
        cout<<"monday";
    }
     else if(num==3){
        cout<<"tuesday";
    }
     else if(num==4){
        cout<<"wednesday";
    }
     else if(num==5){
        cout<<"thursday";
    }
     else if(num==6){
        cout<<"friday";
    }
     else if(num==7){
        cout<<"saturday";
    }
    else{
        cout<<"weekend day";
    }
    
}