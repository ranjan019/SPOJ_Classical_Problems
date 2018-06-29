#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,t;
	//cin>>t;
	while(1)
	{
		int N;
		cin>>N;
		if(N==0)
			break;

		long long int sum=0;

		for(i=N;i>=1;i--)
		{
			sum+=i*i;

		}
		cout<<sum<<endl;
	}
	return 0;
}