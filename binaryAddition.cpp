#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int toBinary(int temp[],int num){

  int rem,new_num,counter=0;
  while(num!=0){
     new_num=num/2;
     rem=num-(2*new_num);
     num=new_num;
     //cout<<rem;
     temp[counter]=rem;
     counter++;
  }
  return counter;
}
void output(int temp[],int count){
    for(int i=count;i>=0;i--){
        cout<<temp[i];
    }
}
void add(int num1,int num2){
    int ans=num1+num2;
    int temp3[ans];
    int count3=toBinary(temp3,ans);
    cout<<endl<<"Binary add: ";
    output(temp3,count3-1);
}
int main(){
  cout<<"Enter two Decimal number:";
  int num1,num2,new_num,rem,count1,count2;
  cin>>num1>>num2;
  int temp1[num1],temp2[num2];
  count1=toBinary(temp1,num1);
  cout<<"Binary number1:";
  output(temp1,count1-1);

  count2=toBinary(temp2,num2);
  cout<<endl<<"Binary number2:";
  output(temp2,count2-1);

  add(num1,num2);

return 0;

}


