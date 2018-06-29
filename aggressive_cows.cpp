//Not accepted yet

#include<bits/stdc++.h>

using namespace std;

bool checkmid(int mid, vector<int> &stall_loc, int cows)
{
	int stalls=stall_loc.size();
	cows-=2;
	int prev=0;
	int cur=1;
	while(cur<stalls-1 && cows>0)
	{
		
		if(stall_loc[cur]-stall_loc[prev]>=mid)
		{
			cows--;
			prev=cur;
			cur++;
		}
		else
		{
			cur++;
		}

	}
	if(cows>0)
		return 0;
	else
		return 1;
}

int main()
{
	int t,i,j,k,l;
	cin>>t;
	while(t--)
	{
		int stalls, cows;
		cin>>stalls>>cows;
		vector<int> stall_loc(stalls);

		for(i=0;i<stalls;i++)
		{
			cin>>stall_loc[i];
		}

		sort(stall_loc.begin(),stall_loc.end());
		//cout<<"sortingdone"<<endl;

		int startbs=1, endbs=stall_loc[stalls-1]-stall_loc[0];

		//int distance;

		int mid=(startbs+endbs)/2;

		while(endbs>startbs)
		{
			mid=(startbs+endbs)/2;
			if(checkmid(mid,stall_loc,cows))
			{
				startbs=mid;
				//mid=(startbs+endbs)/2;
				//cout<<"checkedmid::"<<mid<<endl;
			}
			else
				endbs=mid-1;

		}

		cout<<mid<<endl;

	}
	return 0;
}
