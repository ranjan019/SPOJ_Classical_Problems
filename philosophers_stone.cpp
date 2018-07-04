#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int rows,cols;
		cin>>rows>>cols;
		vector<vector<int> > stairs(rows,vector<int> (cols));
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				cin>>stairs[i][j];
			}
		}
		int temp1;
		for(i=1;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				if(j>0 && j<cols-1)
				{
					temp1= max(stairs[i-1][j-1],stairs[i-1][j]);
					temp1= max(temp1,stairs[i-1][j+1]);
					stairs[i][j]+=temp1 ;
				}
				else if(j==0 && j==cols-1)
					stairs[i][j]+=stairs[i-1][j];
				else if(j==0)
				{
					temp1=max(stairs[i-1][j],stairs[i-1][j+1]);
					stairs[i][j]+=temp1;
				}
				else if(j==cols-1)
				{
					temp1=max(stairs[i-1][j-1],stairs[i-1][j]);
					stairs[i][j]+=temp1;
				}
			}
		}
		int result=0,temp=0;
		for(j=0;j<cols;j++)
		{
			temp=stairs[rows-1][j];
			if(temp>result)
				result=temp;

		}
		cout<<result<<endl;
	}
	return 0;
}