#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	
	while(t--)
	{
		long long b;
		string a;
		//string idiot;

		cin>>a;
		cin>>b;
		

		int n=a.size();
		int last_digit_a=a[n-1]-'0';
		
		if(last_digit_a%10==0)
		{
			cout<<0<<endl;
		}
		else if(b==0)
		{
			cout<<1<<endl;
		}
		else
		{
			int modwith=4;
			int powerwith;
			if(b%modwith==0)
				powerwith=modwith;
			else
				powerwith=b%modwith;

			int result=(pow(last_digit_a,powerwith));
			result%=10;

			cout<<result<<endl;


		}


	}
	return 0;
}