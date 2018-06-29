#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l;
	int x1,x2,x3;
	while(1)
	{
		cin>>x1>>x2>>x3;
		if(x1==0 && x2==0 && x3==0)
			break;

		if(x2-x1==x3-x2)
		{
			cout<<"AP"<<" "<<x3+x3-x2<<endl;
		}
		else
		{
			cout<<"GP"<<" "<<x3*(x3/x2)<<endl;
		}
	}
	return 0;
}