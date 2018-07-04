#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int level, i,j,k;
		long long int result=0, inverse_tri=0;

		cin>>level;

		
		long long int N=level;

		long long int x=N/2;
		
		inverse_tri=(x*(N*N+2+3*N) - (4*N+6)*(x)*(x+1)/2 + (4*x*(x+1)*(2*x+1))/6)/2;
		
		result= ((N-1)*(2+3*N+N*N) - (3+2*N)*(N)*(N+1)/2 +N*(N+1)*(2*N+1)/6 +2 +2*N)/2;
		
		result+=inverse_tri;
		result+= (N)*(N+1)/2;
		cout<<result<<endl;


	}

	return 0;
}