#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		long long int A,B;
		cin>>A>>B;
		long long int a=A, b=B;

		int div=2;
		int p=sqrt(min(A,B));
		while(div<=p)
		{
			if(a%div==0 && b%div==0)
			{
				a=a/div;
				b=b/div;
			}
			else
				div++;
		}
		if(b<a)
		{
			if(a%b==0)
			{
				a/=b;
				b=1;
			}
		}
		else
		{
			if(b%a==0)
			{
				b/=a;
				a=1;
			}
		}

		cout<<b<<" "<<a<<endl;

	}
	return 0;
}