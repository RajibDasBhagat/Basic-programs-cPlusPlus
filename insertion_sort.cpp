#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

void insertion_sort(int A[],int len){
  int i,j,temp;
  for(j=1;j<len;j++){
     temp=A[j];
     i=j-1;
     while(i>=0 && A[i]>temp){
        A[i+1]=A[i];
        i--;
     }
    A[i+1]=temp;
  }
}

void print(int A[],int len){
   for(int i=0;i<len;i++){
        cout<<A[i]<<" ";
   }
}
main(){
  int A[]={89, 78, 33, 34, 12, 1, 56}; // predefined inputs
  int len= sizeof(A)/sizeof(A[0]);     //size of array
  cout<<"          **INSERTION SORT**\n\n";
  cout<<"INPUTS  :: ";
  print(A,len);                        //prints input
  cout<<"\n";
  insertion_sort(A,len);               //sorting
  cout<<"OUTPUTS :: ";
  print(A,len);                        //prints output
  cout<<"\n";
}
