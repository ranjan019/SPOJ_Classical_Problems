#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k,l;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		vector<vector<int> > models(2,vector<int>(N));

		for(i=0;i<N;i++)
		{
			cin>>models[0][i];
		} 
		sort(models[0].begin(),models[0].end());
		for(i=0;i<N;i++)
		{
			cin>>models[1][i];
		}
		sort(models[1].begin(),models[1].end());

		long long int sum=0;
		for(i=0;i<N;i++)
		{
			sum+=models[0][i]*models[1][i];
		}

		cout<<sum<<endl;


	}
}