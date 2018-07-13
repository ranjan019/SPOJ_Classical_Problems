#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	int tr=t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> golds(n);
		for(i=0;i<n;i++)
		{
			cin>>golds[i];
		}

		long long int incl=0, excl=0, excl_new=0;
		for(i=0;i<n;i++)
		{
			excl_new=max(incl,excl);
			incl=excl+golds[i];
			excl=excl_new;
		}

		cout<<"Case "<<tr-t<<": "<<max(excl,incl)<<endl;


	}
	return 0;
}