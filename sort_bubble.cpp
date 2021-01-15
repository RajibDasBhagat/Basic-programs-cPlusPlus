#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void bubbleSort(int ar[],int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=n-1;j>0;j--){
            if(ar[j]<ar[j-1]){
                swap(ar[j],ar[j-1]);
            }
        }
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

bubbleSort(ar,n);
output(ar,n);
return 0;
}

