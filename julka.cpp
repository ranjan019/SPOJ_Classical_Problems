#include<bits/stdc++.h>

using namespace std;

void convert_to_array(string input, vector<int> &result)
{
	int s=input.size();

	for(i=0;i<s;i++)
	{
		result.push_back(input[i]-0);
	}

	vector<int> rev_result;
	for(i=s-1;i>=0;i--)
	{
		rev_result.push_back(result[i]);
	}
	result=rev_result;
}


int main()
{
	int t=10;
	while(t--)
	{
		string total;
		string difference;

		cin>>total;
		cin>>difference;

		vector<int> total_array, difference_array;
		convert_to_array(total,total_array);
		convert_to_array(difference,difference_array);

		vector<int> greaterone;

		int mlen=max(total_array.size(),difference_array.size());

		for(i=0;i<mlen;i++)
		{
			
		}







	}
}
