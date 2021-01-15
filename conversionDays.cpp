#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){

   cout<<"Enter total days to convert: ";

   int total_days,years,weeks,days;
   cin>>total_days;
   years=total_days/365;
   cout<<"years  :"<<years<<endl;

   days=total_days-(years*365);
   weeks=days/7;
   cout<<"weeks  :"<<weeks<<endl;

   days=days-(weeks*7);
   cout<<"days   :"<<days<<endl;

return 0;

}


