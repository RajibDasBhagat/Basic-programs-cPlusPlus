#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  cout<<"Enter Digit or Letter :";
  char capital[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char small[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

  char ch;
  int digit;
  cin>>ch;
  for(int i=0;i<26;i++){
     if(ch==capital[i]){
        cout<<"Capital Letter";
        break;
     }
     else if(ch==small[i]){
        cout<<"Small Letter";
        break;
     }
     else{
        digit=int(ch);
        cout<<"Digit";
        break;
     }
  }



return 0;
}


