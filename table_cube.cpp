#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){

   cout<<"Cube Table upto:";
   int n,ans;
   cin>>n;
   cout<<"number"<<"     "<<"cube"<<endl;

   for(int i=1;i<=n;i++){
       cout<<i   <<"          "<<pow(i,3)<<endl;
   }
return 0;

}


