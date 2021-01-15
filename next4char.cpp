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

   //int num=ch;
   //cout<<"ASCII          :"<<num;

   cout<<endl<<"NEXT FOUR CHAR :"
       <<(char)(ch+1)<<" "<<(char)(ch+2)<<" "<<(char)(ch+3)<<" "<<(char)(ch+4);



return 0;

}


