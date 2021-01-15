#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

 int n,index=0;
 cin>>n;
 string ch1,ch2;
 while(n!=0){
    cin>>ch1;
    cin>>ch2;
    int i,j,flag=0;
    int len1=ch1.length();
    int len2=ch2.length();
    int len=len1-len2;
    for( i=0;i<=len;i++){
        for( j=0;j<len2;j++){
            if(ch1[i+j]!=ch2[j]){
                break;
            }
        }
        if(j==len2){
            flag=1;
        }
    }

    if(flag!=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    n--;
 }
}
