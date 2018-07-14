#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{	
		string p;
		cin>>p;
		int s=p.size();
		int flag=1;
		for(i=0;i<s/2;i++)
		{
			if(p[i]!=p[s-i-1])
			{
				cout<<"NO"<<endl;
				flag=0;
				break;
			}
		}
		if(flag)
			cout<<"YES"<<endl;
	}
	return 0;
}