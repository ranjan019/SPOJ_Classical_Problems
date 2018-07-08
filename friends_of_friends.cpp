#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int tr=t;
	unordered_map<string,int> friends_of_friends;
	unordered_map<string,int> friends;
	vector<vector<string> > vec_ff;
	while(t--)
	{	
		string p;
		int m;
		cin>>p;
		friends[p]=0;
		cin>>m;
		vector<string> temp;
		while(m--)
		{

			string q;
			cin>>q;
			temp.push_back(q);

		}
		vec_ff.push_back(temp);
		temp.clear();

	}
	for(int i=0;i<tr;i++)
	{
		for(int j=0;j<vec_ff[i].size();j++)
		{
			if(friends.find(vec_ff[i][j]) == friends.end())
				friends_of_friends[vec_ff[i][j]]=1;
		}
	}

	cout<<friends_of_friends.size()<<endl;

	return 0;

	
}