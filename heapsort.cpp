#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
//max heap
void swap(int *x,int *y){
     int temp= *x;
     *x=*y;
     *y=temp;
}
int parent(int i){
    return i;
}
int left(int i){
    return (2*i+1);
}
int right(int i){
    return (2*i+2);
}
void max_heapify(int Array[],int i){
    int l_child=left(i);
    int r_child=right(i);
    int heap_size=sizeof(Array)/sizeof(Array[0]);
    int largest=i;
    if(l_child<=heap_size && Array[l_child]>Array[i]){
         largest=l_child;
    }
    else{
         largest=i;
    }
    if(r_child<=heap_size && Array[r_child]>Array[largest]){
         largest=r_child;
    }
    if(largest!=i){
        swap(&Array[i],&Array[largest]);
        max_heapify(Array,largest);
    }
}
void build_max_heap(int Array[]){
     int heap_size=sizeof(Array)/sizeof(Array[0]);
     for(int i=heap_size/2;i>=1;i--){
        max_heapify(Array,i);
     }
}
void heap_sort(int Array[]){
     build_max_heap(Array);
     int heap_size= sizeof(Array)/sizeof(Array[0]);
     for(int i=heap_size;i>=2;i--){
        swap(&Array[1],&Array[i]);
        heap_size--;
        max_heapify(Array,1);
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
  cout<<"          **HEAP SORT**\n\n";
  cout<<"INPUTS  :: ";
  print(A,len);                        //prints input
  cout<<"\n";
  heap_sort(A);               //sorting
  cout<<"OUTPUTS :: ";
  print(A,len);                        //prints output
  cout<<"\n";
}
