#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,k;
	int xor_value=0;

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		xor_value^=k;

	}
	cout<<xor_value<<endl;

	return 0;
}