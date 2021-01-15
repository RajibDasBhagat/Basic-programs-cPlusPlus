#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
  cout<<"Decimal to octal conversion"<<endl;
  cout<<"Enter Decimal number:";
  int num,new_num,rem,counter=0;
  cin>>num;
  int temp[num];
  while(num!=0){
     new_num=num/8;
     rem=num-(8*new_num);
     num=new_num;
     //cout<<rem;
     temp[counter]=rem;
     counter++;
  }
  cout<<"Octal number:";
  for(int i=counter-1;i>=0;i--){
    cout<<temp[i];
  }

return 0;
}


