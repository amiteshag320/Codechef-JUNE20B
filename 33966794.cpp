#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll checkpow(ll n)
{
	while(n%2!=1)
	{
		n=n/2;
	}
	return n;
}

int main() {
	ll t;
	cin>>t;
	for(ll x=0;x<t;x++)
	{
		ll tom,k;
		cin>>tom;
		k=checkpow(tom);
		cout<<k/2<<endl;
		
	}
		
	 
	 return 0;
 }
	