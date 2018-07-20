#include<bits/stdc++.h>

using namespace std;


long long int recursef(int i, int j, vector<int> &input, vector<vector<long long int> > &memoi)
{
	if(i>j)
 	return 0;
	// if(i==j)
	// {
	// 	cur+=input.size()*input[i];
	// 	return cur;
	// }
	//long long int newcur=0;
	int day=input.size()-(j-i);
	if(memoi[i][j]!=-1)
	{
		return memoi[i][j];
	}
	return memoi[i][j]= max(recursef(i+1,j,input,memoi) + day*input[i],
		recursef(i,j-1,input,memoi)+day*input[j]);


}


int main()
{
	int N;
	cin>>N;
	vector<int> input(N);
	for(int i=0;i<N;i++)
	{
		cin>>input[i];
	}
	long long int cur=0;
	long long fmax=1;
	
	vector<vector<long long int> > memoi(input.size(), vector<long long int> (input.size(),-1));
	fmax=recursef(0,N-1,input,memoi);
	cout<<fmax<<endl;

	return 0;
}