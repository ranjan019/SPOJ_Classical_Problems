#include<bits/stdc++.h>

using namespace std;



int main()
{
	int i,j,k,t,divisor,num;
	cin>>t;
	while(t--)
	{
		cin>>num;
		int p=5;
		int count=0;
		while(p<=num)
		{
			count+=floor(num/p);
			p=p*5;

		}
		cout<<count<<endl;
	}
	return 0;

}