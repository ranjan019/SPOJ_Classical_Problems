#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int p;
		vector<int> count(1000001,0);
		for(i=0;i<n;i++)
		{
			scanf("%d",&p);
			count[p+1000]++;
		}
		int flag=0;
		int ans=0;
		for(i=0;i<1000000;i++)
		{
			if(count[i]>n/2)
			{
				flag=1;
				ans=i-1000;
			}

		}
		if(flag==1)
			cout<<"YES "<<ans<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}