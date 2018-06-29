#include<bits/stdc++.h>

using namespace std;

void simple_sieve(int limit, vector<int> &prime_list)
{
	vector<int> primes(limit+1,1);
	for(int i=2;i*i<limit;i++)
	{
		if(primes[i]==1)
		{
			for(int j=2*i;j<limit;j+=i)
			{
				primes[j]=0;
			}
		}
	}
	//int primes_size=primes.size();
	for(int i=2;i<limit;i++)
	{
		if(primes[i]==1)
		{
			prime_list.push_back(i);

		}
	}
}

// void segmented_sieve(int start, int end, vector<int> &prime_list)
// {
// 	vector<int> out_array()
// 	for()
// }

int main()
{
	int n,t,m;
	cin>>t;
	vector<int> prime_list;
	simple_sieve(100001,prime_list);
	//for(int i=0;i<prime_list.size();i++)
		//cout<<"list "<<prime_list[i]<<endl;
	//cout<<"done simple_sieve"<<endl;
	while(t--)
	{

		cin>>m;
		cin>>n;

		vector<int> interval_marker(n-m+1,1);
		int prime_list_size=prime_list.size();
		//cout<<"prime_list_size::"<<prime_list_size<<endl;
		for(int i=0;i<prime_list_size;i++)
		{
			int k=prime_list[i];
			//cout<<"i::"<<i<<"  current_prime_number::"<<k<<endl;
			if(k>n)
				break;
			int p=(floor(m/k)*k);
			//cout<<"starting_point:::"<<p<<endl;
			if(p<m)
				p+=k;
			if(p==k)
				p+=k;

			for(int j=p;j<=n;j+=k)
			{
				//cout<<"zeroed::"<<j<<endl;
				interval_marker[j-m]=0;
			}
		}
		for(int i=0;i<n-m+1;i++)
		{
			//cout<<"intervl_marker::"<<interval_marker[i]<<endl;
			if(interval_marker[i]==1 && m+i>1)
				cout<<m+i<<endl;
		}
		if(t>0)
		cout<<endl;
	}

	return 0;

}