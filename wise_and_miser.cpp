#include<bits/stdc++.h>

using namespace std;

int main()
{
	int N,M,i,j,k;
	cin>>N>>M;

	vector<vector<int> > grid(N,vector<int>(M));

	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			cin>>grid[i][j];
		}
	}
	for(i=1;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(j==0)
				grid[i][j]+=min(grid[i-1][j],grid[i-1][j+1]);
			else if(j==M-1)
				grid[i][j]+=min(grid[i-1][j-1],grid[i-1][j]);
			else
				grid[i][j]+=min(grid[i-1][j-1],min(grid[i-1][j],grid[i-1][j+1]));


		}
	}
	int mini=grid[N-1][0];
	for(j=1;j<M;j++)		
	{	
		if(grid[N-1][j]<mini)
			mini=grid[N-1][j];

	}
	cout<<mini<<endl;

	return 0;


}