#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int MAX=1000000;
/* **************************************************************************************************************************** */
void printIP(vector<int>&xArray,vector<int>&yArray,vector<int>&zArray,int N){
    for(int i=0; i<N;i++){
            cout << xArray[i]<< " " << yArray[i]<< " " << zArray[i];
            cout<<"\n";
    }
}
void printDIST(vector<double>& dist,int N){
    for(int i=0; i<N;i++){
            cout << dist[i];
            cout<<"\n";
    }
}
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//__________________________________________________
//___________________________________________________
int main() {
    int N;
    cin>>N;
    float x,y,z;
    vector<int> xArray,yArray,zArray;
    vector<double> dist;

    //input coordinate values
    if(N >= 2 && N<=MAX){
        for(int i=0; i<N;i++){
            cin >> x >> y >> z;
             xArray.push_back(x);
             yArray.push_back(y);
             zArray.push_back(z);
        }
    }
    else{
        return 0;
    }
    sortX(xArray,yArray,zArray,N);


    cout<<"\n";
    printIP(xArray,yArray,zArray,N);
    //printDIST(dist,N);

    return 0;
}





