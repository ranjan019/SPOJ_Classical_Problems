#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int a,b,h,w;
		cin>>a>>b>>h>>w;
		int n;
		cin>>n;
		vector<int> weights(n);
		for(i=0;i<n;i++)
		{
			cin>>weights[i];
		}
		sort(weights.rbegin(),weights.rend());

		int new_h=h-w,count=0;
		long long int sum=0;
		for(i=0;i<n;i++)
		{
			sum+=weights[i];
			if(sum>new_h)
			{
				cout<<i+1<<endl;
				break;
			}
		}


	}
	return 0;
}