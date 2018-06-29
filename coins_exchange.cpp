#include<bits/stdc++.h>

using namespace std;

long long int greater_than(long long int n, vector<int> &dp)
{
	if(n<1000000)
		return dp[n];

	return max(greater_than(n/2,dp)+greater_than(n/3,dp)+greater_than(n/4,dp),n);
}

int main()
{
	long long int num;
	int i,j,k;
	vector<int> dp;
	dp.push_back(0);
	dp.push_back(1);
	dp.push_back(2);
	// dp.push_back(3);
	// dp.push_back(4);

	for(i=3;i<1000000;i++)
	{
		int k2=i/2;
		int k3=i/3;
		int k4=i/4;
		dp.push_back(max((dp[k2]+dp[k3]+dp[k4]),i));
	}
	while(cin>>num)
	{

		
		cout<<max(greater_than(num,dp),num)<<endl;
	}
	return 0;
}