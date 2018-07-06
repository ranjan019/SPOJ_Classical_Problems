#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,i,j,k;

	cin>>n;
	k=n&(n-1);
	//cout<<k<<endl;
	if(k==0 || n<=1)
	{
		cout<<"TAK"<<endl;
	}
	else
		cout<<"NIE"<<endl;


	return 0;
}