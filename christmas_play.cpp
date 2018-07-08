#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int K,N,height;
		cin>>N>>K;
		vector<int> heights(N);
		for(i=0;i<N;i++)
		{
			cin>>heights[i];
		}

		sort(heights.begin(),heights.end());

		int min_h=heights[K-1]-heights[0];
		j=1;
		for(i=K;i<N;i++)
		{
			if(heights[i]-heights[j]<min_h)
			{
				min_h=heights[i]-heights[j];
			}
			j++;
		}
		cout<<min_h<<endl;

	}
	return 0;
}