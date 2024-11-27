#include<iostream>
using namespace std;

int main(){
    // static if-else statement
//     int a=977;
//     if(a%2==0){
//         cout<<"even number";
//     }
//     else{
//         cout<<"odd number";
//     }
//     // dynamic
//     int number;
//     cout<<"enter any number";
//     cin>>number;
//     if(number%2==0){
//         cout<<"even number";
//     }
//     else{
//         cout<<"odd number";
//     }
//     // for score
// int score;
// cout<<"enter your score(1-100)";
// cin>>score;
// if(score>=50){
//     cout<<"you passed";
// }
// else{
//     cout<<"you failed. try again";
// }
int pin1=1111;
int pin2;
cout<<"enter yor pin";
cin>>pin2;
if(pin1==pin2){
    cout<<"collect your cash";
}
else{
    cout<<"wrong password try agian",
    cin>>pin2;
    if(pin1==pin2){
    cout<<"collect your cash";
}

else{
    cout<<"wrong password";
}
}
}