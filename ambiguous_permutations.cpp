#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k;
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
			break;
		vector<int> org_array(n+1);
		org_array[0]=0;

		for(i=1;i<=n;i++)
		{
			cin>>org_array[i];
		}
		int flag=1;
		for(i=1;i<=n;i++)
		{	
			if(org_array[org_array[i]]!=i)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			cout<<"ambiguous"<<endl;
		else
			cout<<"not ambiguous"<<endl;
	}
	return 0;
}