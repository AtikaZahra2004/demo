#include<iostream>
using namespace std;

int main(){
    print number between 100to150
    int num=100;
    (num>=100 && num<=150)?cout<<"number is valid":cout<<"number is invalid";


    to find even and odd
    int a=12;
    (a%2==0)?cout<<"num is even":cout<<"num is odd";
    
    number divisible by 10 and 11
  int num=110;
    (num%10==0 && num%11==0)?cout<<"divisible by both":cout<<"divisible by none";
  int age;
  cout<<"enter age";
  cin>>age;
  (age>=60)?cout<<"senior citizen":cout<<"younger citizen";
int per=60;
(per>50)?cout<<"pass":cout<<"fail";
int time=13;
(time>12)?cout<<"ge":cout<<"gm";

int cp=1500;
int sp=1400;
(sp>cp)?cout<<"profit":cout<<"lose";


// int num=9;
// (num>0)?cout<<"positive": (num<0)?cout<<"negative":cout<<"zero";
 
    
    // Check if the number is positive, negative, or zero
    // string result = (number > 0) ? "Positive" : (number < 0) ? "Negative" : "Zero";
    
    // cout << "The number is: " << result << endl;
    // return 0;
    // check if the num divided by 3, 4, but not 7



    /check alpahbet bt AtoZ
    char ch;
    (ch>='A' && ch<='Z')?cout<<"alpahbet":cout<<"not alph";

    cout<<"enter ur pass";
    cin>>pass;
    (pass==1111)?cout<<"open":
    (
      cout<<"wp try again",
    cin>>pass,
    (pass==1111)?cout<<"open":cout<<"wp try again";
    )
    
    int pass=1111;
    cout<<"Enter password:- ";
    cin>>pass;
    (pass==1111)?cout<<"open":
    (
      cout<<"wp try again: ",
      cin>>pass,
      (pass==1111)?cout<<"open":cout<<"wp try again",
      cin>>pass,
    
      (pass==1111)?cout<<"open":cout<<"card block"
    )
    ;


}



