#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){
  cout<<"Enter Char small or capital to convert to vice-verssa:";
  char ch;
  cin>>ch;

  if(ch=='\n'){
    ch=getchar();
    cout<<endl;
  }
  else{
    if(ch>=65 && ch<= 90){ //upper case
            ch=ch+32;

    }
    else if(ch>=97 && ch<= 122){ //upper case
            ch=ch-32;
    }
  }
  putchar(ch);
return 0;
}



