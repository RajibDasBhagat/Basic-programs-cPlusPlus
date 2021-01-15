#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){

   cout<<"multiplication table for:";
   int n;
   cin>>n;

   for(int i=1;i<=10;i++){
       cout<<n<<"*"<<i<<"="<< i*n <<endl;
   }
return 0;

}


