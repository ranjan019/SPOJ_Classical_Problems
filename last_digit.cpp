#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	
	while(t--)
	{
		long long int a,b;
		//string idiot;

		cin>>a;
		cin>>b;
		// cin>>idiot;
		// b=0;
		// int string_size=idiot.size();
		// for(i=0;i<string_size;i++)
		// {
		// 	b=b*10+(idiot[i]-0);
		// }
		
		if(a%10==0)
		{
			cout<<0<<endl;
		}
		else if(b==0)
		{
			cout<<1<<endl;
		}
		else
		{
			int last_digit_a=a%10;
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