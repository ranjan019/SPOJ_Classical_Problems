#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l;
	while(1)
	{
		int num_of_packets;
		vector<int> pack;
		int sum=0;
		int moved=0;

		cin>>num_of_packets;
		if(num_of_packets==-1)
			break;

		for(i=0;i<num_of_packets;i++)
		{
			cin>>j;
			pack.push_back(j);
			sum+=j;
		}

		if(sum%num_of_packets!=0)
		{
			cout<<-1<<endl;


		}
		else
		{
			int each=sum/num_of_packets;
			
			for(i=0;i<num_of_packets;i++)
			{
				if(pack[i]<each)
					moved+=(each-pack[i]);
			}
			cout<<moved<<endl;
		}

		
	}
	return 0;
}