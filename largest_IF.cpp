
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

  cout<<"Enter three numbers:";
  int a,b,c,large;
  cin>>a>>b>>c;
  large=a;
  if(b>a)
    large=b;
  if(c>large)
    large=c;

  cout<<"a:"<<a<<endl;
  cout<<"b:"<<b<<endl;
  cout<<"c:"<<c<<endl;
  cout<<"largest:"<<large<<endl;

return 0;
}


