#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l;
	while(1)
	{
		int length;
		cin>>length;
		if(length==0)
			break;
		float area;
		area=pow(float(length),2)/(2*M_PI);

		cout<<setprecision(2)<<fixed<<area<<endl;
	}
}