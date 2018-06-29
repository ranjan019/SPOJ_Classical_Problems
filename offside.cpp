#include<bits/stdc++.h>

using namespace std;

int main()
{
	while(1)
	{
		int num_a, num_d,i,j,k;
		cin>>num_a>>num_d;
		if(num_a==0)
			break;
		vector<int> attackers(num_a), defenders(num_d);

		for(i=0;i<num_a;i++)
		{
			cin>>attackers[i];
		}
		for(i=0;i<num_d;i++)
		{
			cin>>defenders[i];
		}
		sort(attackers.begin(),attackers.end());
		sort(defenders.begin(),defenders.end());

		if(attackers[0]<defenders[1])
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl;


	}
	return 0;
}