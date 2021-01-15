#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void input(int matrixA[100][100],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrixA[i][j];
        }
    }
}
void output(int matrixA[100][100],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrixA[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){

    int rows,cols;
    cin>>rows>>cols;
    int matrixA[100][100];

    //input adjency matrix
    input(matrixA,rows,cols);

    output(matrixA,rows,cols);



return 0;
}
