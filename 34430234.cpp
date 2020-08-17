#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	int n,p,i,j;
	cin>>n>>p;
	int a[n][n];
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
    {
	        cout<<1<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
	        int x;
	        cin>>x;
	        if(x==1)
	        a[i][j]=1;
	        else
	        a[i][j]=0;
	    }
	}
	
	    cout<<2<<endl;
		for(i=0;i<n;i++)
	    {
	         
	    for(j=0;j<n;j++)
	    {
	       cout<<a[i][j]<<" "; 
	    }
	    cout<<endl;
	    }
	int y;
	cin>>y;
	if(y==-1)
	break;
	        
	}        
	return 0;
}
