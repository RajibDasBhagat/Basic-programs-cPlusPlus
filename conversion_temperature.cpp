
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

  cout<<"Temperature Conversion"<<endl;
  cout<<"1. Fahrenheit to Celsius."<<endl;
  cout<<"2. Celsius to Fahrenheit."<<endl;
  cout<<"Enter your choice:";

  int choice;
  cin>>choice;
  float degree,temp;
  if(choice==1){
     cout<<"Enter temperature in Fahrenheit:";
     cin>>degree;
     temp=(degree-32)/1.8;
     cout<<"Celsius:"<<temp<<endl;
  }
  else if(choice == 2){
     cout<<"Enter temperature in Celsius:";
     cin>>degree;
     temp=(degree*1.8)+32;
     cout<<"Fahrenheit:"<<temp<<endl;
  }
  else{
    cout<<"Invalid Choice"<<endl;
  }

return 0;
}


