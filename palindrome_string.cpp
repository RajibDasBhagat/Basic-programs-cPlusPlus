
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
  cout<<"Enter a string to check for palindrome:";

  char str[100],ch;
  cin.getline(str,100);

  int i,j,flag=1;
  for(int len=0;str[len]!='\0';len++){
      for(i=0;i<len/2;i++){
         for(j=len-1;j>=0;j--){
            if(str[i]!=str[j]){
                flag=0;
                break;
            }
         }
      }
  }
  if(flag==1){
    cout<<"Palindrome";
  }
  else{
    cout<<"Not Palindrome";
  }

return 0;
}

