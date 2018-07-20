#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> array(n);
	for(int i=0;i<n;i++)
		cin>>array[i];
	
	int k;
	cin>>k;
	map<int,int> mp;

	for(int i=0;i<k;i++)
		mp[array[i]]++;

	cout<<mp.rbegin()->first;

	for(int i=k;i<n;i++)
	{
		mp[array[i-k]]--;
		if(mp[array[i-k]]==0)
			mp.erase(array[i-k]);
		mp[array[i]]++;

		cout<<" "<<mp.rbegin()->first;
	}
	cout<<endl;


	return 0;
	


}