#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

  cout<<"one's complement"<<endl;
  cout<<"Enter Decimal number:";
  int num,new_num,rem,counter=0;
  cin>>num;
  int temp[num];
  while(num!=0){
     new_num=num/2;
     rem=num-(2*new_num);
     num=new_num;
     //cout<<rem;
     temp[counter]=rem;
     counter++;
  }
  cout<<"Binary number:";
  for(int i=counter-1;i>=0;i--){
    cout<<temp[i];
  }

  cout<<endl<<"one's complement: ";
  for(int i=counter-1;i>=0;i--){
    if(temp[i]==1){
        cout<<'0';
    }
    else{
        cout<<'1';
    }
  }

return 0;

}


