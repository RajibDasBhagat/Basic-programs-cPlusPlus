#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){
   cout<<"Input Char: ";
   char ch;
   cin>>ch;
   cout<<"Inputted Char  :"<<ch<<endl;

   int num=ch;
   cout<<"ASCII          :"<<num<<endl;

   for(int i=0;i<100;i++){
       cout<<(char)(ch+i)<<" "<<num++<<endl;
   }
return 0;

}


