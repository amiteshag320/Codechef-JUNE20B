#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    for(int x=0;x<t;x++)
    {
        string s;
        cin>>s;
        int count=0,sum=0,i;
        for(i=0;i<s.length()-1;i++)
        {
            if(s[i]=='x'&&s[i+1]=='y')
            {
                count++;
                s[i]='a';
                s[i+1]='a';
            }
            if(s[i]=='y'&&s[i+1]=='x')
            {
                count++;
                s[i]='a';
                s[i+1]='a';
                
            }
            
            
            
        }
        cout<<count<<endl;
    }
    
	
		return 0;
}
