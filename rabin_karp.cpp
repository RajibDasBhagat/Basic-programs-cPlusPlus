#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int hash_function(int m,int d,int q){
    int i,h=1;
    for(i=0;i<m-1;i++){
        h = (h * d) % q;
    }
    return h;
}

void rabin_karp(string T,string P,int d,int q){
    int n=T.length();
    int m=P.length();
    //int h=pow(d,m-1)%q;
    int h = hash_function(m,d,q);
    int p=0;
    int t0=0;
    int i,flag=0;

    for(int i=0;i<m;i++){  // preprocessing
        p=(d*p + P[i])%q;
        t0=(d*t0 + T[i])%q;
        //cout<<p<<" "<<t0<<endl;
    }
    for(int s=0;s<=(n-m);s++){  //matching
        if(p==t0){
            for(i=0;i<m;i++){
                if(T[s+i]!=P[i]){
                    break;
                }
            }
            if(i==m){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        if(s<(n-m)){
            t0=(d*(t0 - ((T[s]*h) % q)) + (T[s+m])) % q;
        }
   }
}

int main() {
 int n;
 cin>>n;
 string ch1,ch2;
 while(n!=0){
        cin>>ch1;
        cin>>ch2;
        int d=256,q=101;
        rabin_karp(ch1,ch2,d,q);
        cout<<endl;
        n--;
    }
}
