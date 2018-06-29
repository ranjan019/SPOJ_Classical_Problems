#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	
	cin>>t;
	int tr=t;
	while(t--)
	{
		int stamps, num,i;
		cin>>stamps>>num;
		int numr=num;
		vector<int> friends(num);
		for(i=0;i<num;i++)
		{
			cin>>friends[i];

		}
		sort(friends.rbegin(),friends.rend());
		long long int sum=0;
		i=0;
		while(sum<stamps && num--)
		{
			sum+=friends[i];
			i++;

		}

		if(sum>=stamps)
		{
			cout<<"Scenario #"<<tr-t<<":"<<endl;
			cout<<numr-num<<endl;
			cout<<endl;
		}
		else
		{
			cout<<"Scenario #"<<tr-t<<":"<<endl;
			cout<<"impossible"<<endl;
			cout<<endl;
		}


	}
	return 0;
}