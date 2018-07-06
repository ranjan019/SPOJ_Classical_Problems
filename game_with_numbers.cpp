#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int num,i,j;
	cin>>num;
	if(num%10==0)
		cout<<2<<endl;
	else
	{
		cout<<1<<endl<<(num%10)<<endl;
	}
	return 0;
}