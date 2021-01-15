
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
  cout<<"Enter a number to check for palindrome:";
  int num;
  cin>>num;
  int n,rem,rev=0;
  n=num;

  while(num!=0){
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
    cout<<"check"<<endl;
    cout<<"rem:"<<rem<<endl;
    cout<<"rev:"<<rev<<endl;
    cout<<"num:"<<num<<endl;
  }

  if(rev==n){
    cout<<"Palindrome"<<endl;
  }
  else {
    cout<<"Not Palindrome"<<endl;
    }
return 0;
}

