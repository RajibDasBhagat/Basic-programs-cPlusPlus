#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  cout<<"Enter a year:";
  int year;
  cin>>year;

  if(year%100 == 0){
    if(year%400==0){
        cout<<"Leap year"<<"\n";
    }
  }
  else if(year%4==0){
        cout<<"Leap year"<<endl;
  }
  else{
        cout<<"Not Leap year"<<endl;
  }
return 0;
}

