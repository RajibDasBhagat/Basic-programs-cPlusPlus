#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

//row search
int Row(vector<vector<char> >&mat, int mat_size, string search_str, int row, int col, int len){

    int next=0;
    while(next < len){
        col = col % mat_size;
        if(search_str[next] != mat[row][col]){
            return 0;
        }
        next++;
        col++;
    }
    if(next == len){
        return 1;
    }
    else{
        return 0;
    }

}

//column search
int Col(vector<vector<char> >&mat ,int mat_size ,string search_str ,int row, int col, int len){

     int next=0;
     while(next < len){
        row = row % mat_size;
        if(search_str[next] != mat[row][col]){
            return 0;
        }
        next++;
		row++;
    }
    if(next == len){
        return 1;
    }
    else{
        return 0;
    }
}

//diagonal search
int Dia(vector<vector<char> >&mat ,int mat_size ,string search_str ,int row, int col, int len){

    int next=0;
    if (len > mat_size-row || len > mat_size-col) {
        return 0;
    }
    for( ; next < len && row < mat_size && col < mat_size; ){
        if(search_str[next] != mat[row][col]){
            return 0;
        }
        next++;
		row++;
		col++;
    }
        if(next == len){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {

  int testCase;      //number of test cases
  cin >> testCase;
  int mat_size;      //matrix size
  char ch;
  while(testCase > 0){

    cin >> mat_size;
    vector<vector<char> >mat;        //2-dim matrix

    for(int i = 0; i < mat_size; i++){
        vector<char>ar;             //1-dim matrix
        for(int j = 0; j < mat_size; j++){
            cin >> ch;
            ar.push_back(ch);       //insert into array
            }
        mat.push_back(ar);          //innsert into matrix
    }
    testCase--;

    //convert inserted char to lower
    for(int row = 0 ;row < mat_size; row++){
        for(int col = 0; col < mat_size; col++){
            if(mat[row][col] != 0){
                mat[row][col] = tolower(mat[row][col]);
            }
        }
    }
    string search_str;        //search string
    cin >> search_str;

    int count = 0;
    int len = search_str.length();
    //convert search_str to lower
    for(int i = 0; i < len; i++){
       if(search_str[i] != ' '){
          search_str[i] = tolower(search_str[i]);
       }
    }
    if(len > 0){
           for(int i = 0; i < mat_size; i++){
               for(int j = 0; j < mat_size; j++){
                   if(mat[i][j] == search_str[0]){
                       if(Row(mat,mat_size,search_str,i,j,len)){   //row search call
                           count++;
                       }
                       if(Col(mat,mat_size,search_str,i,j,len)){    //column search call
                           count++;
                       }
                       if(Dia(mat,mat_size,search_str,i,j,len)){   //diagonal search call
                           count++;
                       }
                   }
               }
           }
       }
    cout << count << "\n";
  }
  return 0;
}
