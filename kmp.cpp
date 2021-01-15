#include<bits/stdc++.h>
#define size 7001
using namespace std;
int f[7001];
void pitable(char p[],int m)
{
	f[0]=0;
	int j=0;
	for(int i=1;i<m;i++)
	{
		while(j && p[i]!=p[j])
			j=f[i-1];
		if(p[i]==p[j])
			j++;
		f[i]=j;
	}
}
int main()
{
    int m,n,num;
    cin>>num;
    while(num--){
        cin>>m>>n;
        char t[n],p[m];
        cin>>p>>t;
        pitable(p,m);
        int j=0,count=0;
        for(int i=0;i<n;i++){
            while(j && t[i]!=p[j])
                j=f[j-1];
            if(t[i]==p[j])
                j++;
            if(j==m){
                j=f[j-1];
                count++;
            }
        }
        for(int i=0;i<count;i++){
          cout<<i<<" ";
        }
	cout<<endl;
    }
}
