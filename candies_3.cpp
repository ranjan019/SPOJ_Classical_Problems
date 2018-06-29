#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int sum=0;
		long long int n,p;
		cin>>n;
		for(long long int i=0;i<n;i++)
		{
			cin>>p;
			p=p%n;
			sum=(sum%n+p)%n;

		}
		if(sum%n==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}