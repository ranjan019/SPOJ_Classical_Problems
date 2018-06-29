#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num_of_levels;
		long long int result;
		cin>>num_of_levels;

		long long int p=num_of_levels;

		result=p*(4+(p-1)*3);
		result=result/2;
		result=result%1000007;

		cout<<result<<endl;




	}
	return 0;
}