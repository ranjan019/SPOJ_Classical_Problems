#include<bits/stdc++.h>

using namespace std;

void convert_to_array(string n, vector<int> &result)
{
	int i;
	int n_size=n.size();

	for(i=0;i<n_size;i++)
	{
		result.push_back(n[i]-'0');
	}
}

int main()
{
	int i,j,k,l;
	while(1)
	{
		string num;
		cin>>num;

		if(num[0]=='0')
			break;
		vector<int> num_array;

		convert_to_array(num,num_array);

		int n_size=num_array.size();

		vector<long long int> dp(n_size,0);
		dp[0]=1;

		if(n_size>1)
		{
			if(num_array[0]*10+num_array[1]<=26 && num_array[0]*10+num_array[1]>0   && num_array[1]>0)
				dp[1]=2;
			else
				dp[1]=1;
		}

		for(i=2;i<n_size;i++)
		{
			if(num_array[i-1]*10+num_array[i]<=26 && num_array[i-1]*10+num_array[i]>0 && num_array[i-1]!=0 && num_array[i]>0)
			{
				dp[i]=dp[i-1]+dp[i-2];
			}
			else if(num_array[i]==0)
			{
				if(num_array[i-1]==0)
					dp[i]=0;
				else
					dp[i]=dp[i-2];

			}
			else
				dp[i]=dp[i-1];
		}

		cout<<dp[n_size-1]<<endl;


	}
	return 0;
	
}