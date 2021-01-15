
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void input(int ar[],int n){
   int i;
   for(i=0;i<n;i++){
    cin>>ar[i];
   }
}

void output(int ar1[],int ar2[], int n){
   int i;
   cout<<"Entered array"<<endl;
   for(i=0;i<n;i++){
     cout<<ar1[i]<<" ";
   }
   cout<<endl;
   for(i=0;i<n;i++){
     cout<<ar2[i]<<" ";
   }
}
void addArray(int ar1[],int ar2[],int n){
  int i,j,temp[n];
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j){
            temp[i]=ar1[i]+ar2[j];
        }
    }
  }
  cout<<endl<<"Added array"<<endl;
  for(i=0;i<n;i++){
    cout<<temp[i]<<" ";
  }
}

int main(){
int n; //no of elements to search
cout<<"Enter number of elements:"<<endl;
cin>>n;
cout<<"Enter the array1"<<endl;
int ar1[n]; //arr list
int ar2[n];
input(ar1,n);
cout<<endl<<"Enter the array2"<<endl;
input(ar2,n);
output(ar1,ar2,n);
addArray(ar1,ar2,n);

return 0;
}

