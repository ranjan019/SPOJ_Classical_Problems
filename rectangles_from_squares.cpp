#include<bits/stdc++.h>

using namespace std;

long long int prime_fac(int n)
{
	int i,j,k;
	vector<int> count;
	int div=2;
	while(n>1)
	{
		int temp_count=0;
		while(n%div==0)
		{
			temp_count++;
			n=n/div;
		}
		count.push_back(temp_count);
		div++;
	}

	int ar_size=count.size();
	long long int product=1;
	for(i=0;i<ar_size;i++)
	{
		product*=(count[i]+1);
	}
	if(product%2)
	{
		return product/2 + 1;
	}
	else
		return product/2;

}

int main()
{
	int num,i,j,k;
	cin>>num;
	long long int total=1;

	for(i=2;i<=num;i++)
	{
		total+=prime_fac(i);
	}

	cout<<total<<endl;

	return 0;


}