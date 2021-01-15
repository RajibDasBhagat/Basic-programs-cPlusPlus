#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){

   cout<<"Enter length & breadth: ";
   int len,br;
   cin>>len>>br;
   cout<<"Length:  "<<len<<endl;
   cout<<"Breadth: "<<br<<endl;
   for(int i=1;i<=len;i++){
        for(int j=1;j<=br;j++){
            cout<<i<<"*"<<j<<"="<< i*j <<" mt sq"<<endl;
       }
   }
return 0;

}


