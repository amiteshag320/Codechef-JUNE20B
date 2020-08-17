#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	    int n,i,j,count=0;
	    cin>>n;
	    int a[n][n];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            count++;
	            if(i%2==0)
	            a[i][j]=count;
	            else
	            a[i][n-j-1]=count;
	            
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cout<<a[i][j]<<" ";
	           
	        }
	        
	        cout<<endl;
	    }     
	    
	}
	
	return 0;
}
