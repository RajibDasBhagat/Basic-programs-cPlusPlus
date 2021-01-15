#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//print output function
int print(int n, vector<int> ar){
    for(int i=0;i<n;i++){
           cout << ar[i] << " ";
        }
    return 0;
     
}

//roulette function
int roulette(int n, vector<int> ar, int tick){
    int i,temp;
    while (tick > 0){
        //rotate right
        temp = ar[n-1];
        for(i=n-1; i>0; i--){
            ar[i]=ar[i-1];
        }
        ar[0]= temp;
        tick--;        
    }
 
    
    while(tick < 0){
		//left rotate
        temp= ar[0];
        for(i=0;i<n;i++){
            ar[i]=ar[i+1];   
        }
        ar[n-1] = temp; 
        tick++;    
    }
    
    print(n,ar);
    
    return 0;
}


int main() {
    //insert total number 
    int n;
    cin >> n;
    
    //array list to store all the numbers
    vector<int> ar(n);
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    
    //insert number of ticks +ve(clockwise), -ve(anticlockwise)
    int tick;
    cin >> tick;
    
    //call roulette function
    roulette(n, ar, tick);
    return 0;
}