#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
  cout<<"Decimal to Hexa conversion"<<endl;
  cout<<"Enter Decimal number:";
  int num,new_num,rem,counter=0;
  cin>>num;
  int temp[num];
  while(num!=0){
     new_num=num/16;
     rem=num-(16*new_num);
     num=new_num;
     //cout<<rem;
     temp[counter]=rem;
     counter++;
  }
  cout<<"Hexa number:";
  for(int i=counter-1;i>=0;i--){
    if(temp[i]==10){
       cout<<"A";
    }
    else if(temp[i]==11){
       cout<<"B";
    }
    else if(temp[i]==12){
       cout<<"C";
    }
    else if(temp[i]==13){
       cout<<"D";
    }
    else if(temp[i]==14){
       cout<<"E";
    }
    else if(temp[i]==15){
       cout<<"F";
    }
    else{
        cout<<temp[i];
    }
  }

return 0;
}


