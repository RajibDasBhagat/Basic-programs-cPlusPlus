#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void merge(int ar[],int low,int mid,int high){
    int n1,n2,i,j,k;
    n1=mid-low+1;
    n2=high-mid;
    int left[n1+1],right[n2+1];
    for(i=1;i<=n1;i++){
        left[i]=ar[low+i-1];
    }
    for(j=1;j<=n2;j++){
        right[j]=ar[mid+j];
    }
    left[n1+1]=999;
    right[n2+1]=999;
    i=1;
    j=1;
    for(k=low;k<high;k++){
        if(left[i]<=right[j]){
            ar[k]=left[i];
            i++;
        }
        else if(ar[k]==right[j]){
            j++;
        }
    }
}
void mergeSort(int ar[],int low,int high){
   if(low<high){
      int mid=(low+high)/2;
      mergeSort(ar,low,mid);
      mergeSort(ar,mid+1,high);
      merge(ar,low,mid,high);
   }
}

void output(int ar[],int n){
    int i;
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
int main(){
int n;
cout<<"No. of elements:"<<endl;
cin>>n;
int ar[n];
for(int i=0;i<n;i++){
    cin>>ar[i];
}
int low=0;
int high=n-1;
mergeSort(ar,low,high);
output(ar,n);
return 0;
}
