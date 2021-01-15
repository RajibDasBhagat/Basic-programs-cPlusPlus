
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
int num;
cout<<"Enter a number: ";
cin>>num;

for(int i=2;i<=num/2;i++){
     if(num%i==0){
        cout<<"not prime"<<endl;
        break;
     }
     else{
        cout<<"Its a Prime"<<endl;
        break;
     }
}


return 0;
}

