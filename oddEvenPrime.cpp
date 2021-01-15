
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void prime(int num){
  for(int i=2;i<=num/2;i++){
                if(num%i==0){
                    cout<<"Not Prime"<<endl;
                    break;
                }
                else{
                    cout<<"Prime number"<<endl;
                    break;
                }
            }
}

int main(){

   char ch;
   int num;
   do{
        cout<<"Enter a number:";
        cin>>num;
        if(num%2==0){
            cout<<"Even number"<<endl;
        }
        else{
            cout<<"Odd number"<<endl;
        }

        if(num==1){
            cout<<"Prime number"<<endl;
        }
        else{
            prime(num);
        }
        cout<<"Do you want to continue:";
        cin>>ch;
   }while(ch=='y' || ch=='Y');
return 0;
}

