#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct set{
  int root;
  int rank;
};
int Find(set sets[], int key)
{

    if (sets[key].root != key)
        sets[key].root = Find(sets, sets[key].root);

    return sets[key].root;
}


void Union(set sets[],int key1,int key){
     int x=Find(sets,sets[key].root);
     int y=Find(sets,sets[key1].root);

     if (sets[x].rank < sets[y].rank)
        sets[x].root = y;
    else if (sets[x].rank > sets[y].rank)
        sets[y].root = x;

    else
    {
        sets[y].root = x;
        sets[x].rank++;
    }
}


int main() {
    int no_vertex,no_query;
    cin>> no_vertex >> no_query;
    int cc=no_vertex;

    //input
    int vertex[no_vertex+1],rank[no_vertex+1],inter[no_vertex];
    //makeset
    struct set *sets =(struct set*) malloc( (no_vertex+1) * sizeof(struct set) );
    for(int i=1;i<=no_vertex;i++){
       sets[i].root=i;
       sets[i].rank=0;
    }

    string cmd;
    int key,key1;
    for( int i = 0; i < no_query ; i++ ){
       cin >> cmd  ;
       if( cmd == "UNION"){
          cin>>key>>key1;
          int x=Find(sets,sets[key].root);
          int y=Find(sets,sets[key1].root);
           if(x!=y){
               Union(sets,key,key1);
               cc--;
           }
       }
       else if( cmd == "FIND"){
           cin>>key;
           cout<<Find(sets,sets[key].root)<<endl;
       }
       else if( cmd == "CC"){
           cout<<cc<<endl;
       }
       else if(cmd == "PARENT"){
           cin>>key;
           //cout<<Find(vertex,key)<<endl;
           cout<<sets[key].root<<endl;
       }
    }

    //output
    for(int i=1;i<=no_vertex;i++){
        //cout<<i<<vertex[i]<<rank[i]<<"\n";
    }
    return 0;
}
