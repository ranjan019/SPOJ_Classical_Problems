#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l;
	while(1)
	{
		int girls,boys;
		cin>>girls>>boys;

		if(girls==-1 && boys==-1)
			break;
		else if(girls==0 || boys==0)
		{
			if(girls>=boys)
				cout<<girls<<endl;
			else
				cout<<boys<<endl;
		}
		else
		{
			if(girls<boys)
			{
				if(boys%(girls+1)==0)
					cout<<boys/(girls+1)<<endl;
				else
					cout<<boys/(girls+1) + 1<<endl;
			}
			else
			{
				if(girls%(boys+1)==0)
					cout<<girls/(boys+1)<<endl;
				else
					cout<<girls/(boys+1) + 1<<endl;
			}
		}
	}
	return 0;
}

