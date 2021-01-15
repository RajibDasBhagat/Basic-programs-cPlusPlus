#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  cout<<"Enter series upto :";
  int n,series=1;
  cin>>n;
  cout<<series<<" ";
  do{
        series=series+3;
        cout<<series<<" ";
  }while(series!=n);
return 0;
}


