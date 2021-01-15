#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){

   cout<<"Square Table upto:";
   int n,ans;
   cin>>n;
   cout<<"number"<<"     "<<"square"<<endl;

   for(int i=1;i<=n;i++){
       cout<<i   <<"          "<<pow(i,2)<<endl;
   }
return 0;

}


