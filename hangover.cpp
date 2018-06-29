#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k;
	while(1)
	{
		float inp;
		cin>>inp;
		if(inp==0.00)
			break;
		float sum=0;
		float n=2;
		int count=0;
		while(sum<inp)
		{
			sum+=float(1/n);
			n++;
			count++;
		}

		cout<<count<<" card(s)"<<endl;
	}
	return 0;
}