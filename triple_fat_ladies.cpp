#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long int k,p,addd,m;
		cin>>k;
		p=k%4;
		//m=k/4;

		if(p==0)
			addd=942;
		if(p==1)
			addd=192;
		if(p==2)
			addd=442;
		if(p==3)
			addd=692;




		cout<<(((k-1)/4)*1000)+addd<<endl;

	}
	return 0;
}