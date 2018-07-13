#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		string A, B;
		cin>>A>>B;
		int a_size=A.size(), b_size=B.size();

		vector<vector<int> > dp(a_size+1,vector<int> (b_size+1,0));

		for(i=0;i<=b_size;i++)
		{
			dp[0][i]=i;
		}
		for(i=0;i<=a_size;i++)
		{
			dp[i][0]=i;
		}
		for(i=1;i<=a_size;i++)
		{
			for(j=1;j<=b_size;j++)
			{
				if(A[i-1]==B[j-1])
					dp[i][j]=dp[i-1][j-1];
				else
				{
					int temp=min(dp[i-1][j],dp[i][j-1]);
					dp[i][j]=min(dp[i-1][j-1],temp)+1;
				}
			}
		}
		cout<<dp[a_size][b_size]<<endl;
	}
	return 0;
}