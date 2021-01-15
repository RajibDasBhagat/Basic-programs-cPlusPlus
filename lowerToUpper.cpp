#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  cout<<"Enter small letter:";

  char small;
  cin>>small;

  int capital;
  capital=int(small-32);
  cout<<char(capital);

return 0;
}


