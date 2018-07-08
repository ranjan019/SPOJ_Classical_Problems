#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int n, towers, d;
		cin>>n>>towers>>d;
		int towers_handled=0;
		for(i=0;i<n;i++)
		{
			cin>>k;
			if(k%d==0)
				towers_handled+=k/d - 1;
			else
				towers_handled+=k/d;
		}
		if(towers_handled>=towers)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}