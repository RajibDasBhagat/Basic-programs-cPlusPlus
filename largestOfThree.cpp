
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
   cout<<"Enter three numbers:";
   int num1,num2,num3,large;
   cin>>num1>>num2>>num3;
   large=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
   cout<<"num1:"<<num1<<endl;
   cout<<"num2:"<<num2<<endl;
   cout<<"num3:"<<num3<<endl;
   cout<<"largest:"<<large<<endl;



return 0;
}


