
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
int search_linear(int ar[],int n,int key){
  int i,flag;
  for(i=0;i<n;i++){
    if(ar[i]==key){
        flag=1;
    }
    else
        flag=0;
  }

  if(flag==1){
        cout<<"Element "<<key<<" found"<<endl;
  }
  else{
        cout<<"Element not found"<<endl;
  }
}


int main(){
int n; //no of elements to search
cout<<"Enter number of elements:"<<endl;
cin>>n;
cout<<"Enter the array"<<endl;
int ar[n]; //arr list
input(ar,n);
int key;   //key element to search
cout<<"Enter elements to search"<<endl;
cin>>key;
search_linear(ar,n,key);


return 0;
}

