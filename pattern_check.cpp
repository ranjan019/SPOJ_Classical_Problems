#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i;
	for(i=0;i<10000;i++)
	{
		long long int m=pow(i,3);
		if(m%1000==888)
			cout<<i<<endl;
	}
}