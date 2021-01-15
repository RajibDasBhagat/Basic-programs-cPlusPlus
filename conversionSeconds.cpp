#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;


int main(){

   cout<<"Enter total seconds to convert: ";

   int total_sec,hours,minute,seconds;
   cin>>total_sec;
   hours=total_sec/3600;
   cout<<"hours    :"<<hours<<endl;

   seconds=total_sec-(hours*3600);
   minute=seconds/60;
   cout<<"minute   :"<<minute<<endl;

   seconds=seconds-(minute*60);
   cout<<"seconds  :"<<seconds<<endl;

return 0;

}


