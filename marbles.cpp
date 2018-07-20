#include<bits/stdc++.h>

using namespace std;

long long int ncr(int n, int r)
{
	long long int ans=1;
	if(r>n/2)
		r=n-r;
	for(int i=0;i<r;i++)
	{
		ans*=(n);
		ans/=i+1;
		n=n-1;
	}
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<ncr(n-1,k-1)<<endl;
	}
	return 0;
}