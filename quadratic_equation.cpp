
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

//ax^2+bx+c=0 (a!=0)
int main(){

   cout<<"Quadratic Equation"<<endl;
   cout<<"Enter a b c:";
   float a,b,c,root1,root2,discri;
   cin>>a>>b>>c;
   if(a==0){
      cout<<"The value of 'a' cannot be 0."<<endl;
   }
   else{
        discri=pow(b,2)-4*a*c;
        if(discri<0){
            cout<<"Imaginary roots"<<endl;
        }
        else if(discri==0){
            cout<<"Equal roots"<<endl;
            root1=-b/2*a;
            root2=-b/2*a;
            cout<<"Root1:"<<root1<<endl;
            cout<<"Root2:"<<root2<<endl;
        }
        else{
            cout<<"Unequal roots"<<endl;
            root1=(-b+sqrt(discri))/2*a;
            root2=(-b-sqrt(discri))/2*a;
            cout<<"Root1:"<<root1<<endl;
            cout<<"Root2:"<<root2<<endl;
        }
   }

return 0;
}



