#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

main(){
int n,d,i,j,temp,diff,count=0;
cin>>n>>d;
int ar[n];

for(i=0;i<n;i++){
   cin>>ar[i];
}

for(i=0;i<n;i++){
   temp=ar[i];
   for(j=i+1;j<n;j++){
     if(temp!=ar[j]){
        diff=ar[i]-ar[j];
        if(ar[i]!=ar[j] && diff<=d){
            cout<<ar[i]<<","<<ar[j]<<"\n";
		    count++;
		}
     }

   }
}
cout<<2*count;

return 0;
}
