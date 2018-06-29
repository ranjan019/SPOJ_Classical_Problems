#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int x,y,num;
		cin >> x >> y;
		if(x==y)
		{
			if(x%2)
			{
				num=2*x-1;
				cout<<num<<endl;
				//break;
			}
			else
			{
				num=2*x;
				cout<<num<<endl;
				//break;
			}
		}
		else if(x-1==y+1)
		{
			if((x-1)%2)
			{
				num=2*(x-1);
				cout<<num<<endl;
				//break;
			}
			else
			{
				num=2*(x-1)-1;
				cout<<num<<endl;
				//break;
			}
		}
		else
			cout<<"No Number"<<endl;
	}
}