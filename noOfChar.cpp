
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){

    cout<<"Enter a String:";
    char ch;
    cin>>ch;

    int spaces=0,others=0;

    while((ch=getchar()) != '\n'){
          if(ch==' '){
            spaces++;
          }
          else{
            others++;
          }
    }
    cout<<"Spaces:"<<spaces<<"\n"<<"others:"<<others+1;
return 0;

}


