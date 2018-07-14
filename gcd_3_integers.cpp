#include<bits/stdc++.h>

using namespace std;

// long long int gcd(long long int b, long long int c)
// {
	
// 	
// 	for(i=2;i)
// }

int main()
{
	long long int i,j;
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int mini=min(a,min(b,c));
	long long int k=sqrt(mini);

	// if(a%mini==0 && b%mini==0 && c%mini==0)
	// {
	// 	cout<<mini<<endl;
	// }
	// else
	// {
		int flag=0;
		for(i=1;i<=k;i++)
		{
			long long int d=mini/i;
			if(a%d==0 && b%d==0 && c%d==0)
			{
				cout<<d<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			for(i=k;i>=1;i--)
			{
				//int d=mini/i;
				if(a%i==0 && b%i==0 && c%i==0)
				{
					cout<<i<<endl;
					//flag=1;
					break;
				}
			}
		}

	// }
	return 0;

}