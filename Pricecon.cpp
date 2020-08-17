#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t;
cin>>t;
for(int x=0;x<t;x++)
{
    ll n,k,sum=0,plus=0;
    int i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]>k)
        a[i]=k;
        plus+=a[i];
    }
    cout<<sum-plus<<endl;
}
return 0;
}