#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  cout<<"Enter fibbonacci series upto :";
  int n;
  cin>>n;

  unsigned long first,second,third;
  first=0;
  second=1;
  cout<<first<<" "<<second<<" ";
  for(int i=2;i<n;i++){
    third=first+second;
    first=second;
    second=third;
    cout<<third<<" ";
  }

return 0;
}

