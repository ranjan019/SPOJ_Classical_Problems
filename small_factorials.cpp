#include<bits/stdc++.h>

using namespace std;

void arrayfy(int number, vector<int> &result_array)
{
	int i,j,k;
	k=number;
	while(k)
	{
		result_array.push_back(k%10);
		k=k/10;
	}
}

void multiply_arrays(vector<int> &temp_ans, vector<int> next_num)
{
	vector<int> result;
	int i,j,k;
	int ta_size=temp_ans.size();
	vector<vector<int> > temp_row_bunch;
	for(i=0;i<next_num.size();i++)
	{
		
		vector<int> temp_row;
		if(i==1)
			temp_row.push_back(0);
		if(i==2)
		{
			temp_row.push_back(0);
			temp_row.push_back(0);
		}
		int carry=0;
		for(j=0;j<ta_size;j++)
		{
			temp_row.push_back((next_num[i]*temp_ans[j]+carry)%10);
			carry=(next_num[i]*temp_ans[j]+carry)/10;
		}
		while(carry>0)
		{
			temp_row.push_back(carry%10);
			carry=carry/10;
		}
		temp_row_bunch.push_back(temp_row);
		temp_row.clear();
	}
	int max_len=0;
	for(i=0;i<next_num.size();i++)
	{
		if(temp_row_bunch[i].size()>max_len)
			max_len=temp_row_bunch[i].size();
	}

	int carry_sum=0;
	for(j=0;j<max_len;j++)
	{
		int temp_sum=0;

		for(i=0;i<next_num.size();i++)
		{
			if(temp_row_bunch[i].size()>j)
				temp_sum+=temp_row_bunch[i][j];

		}
		result.push_back((temp_sum+carry_sum)%10);
		carry_sum=(temp_sum+carry_sum)/10;
	}
	while(carry_sum>0)
	{
		result.push_back(carry_sum%10);
		carry_sum=carry_sum/10;
	}

	temp_ans=result;



}

int main()
{
	int t,i,j,k,num;
	cin>>t;
	while(t--)
	{
		vector<int> next_num;

		cin>>num;

		vector<int> temp_ans;
		temp_ans.push_back(1);
		for(i=2;i<=num;i++)
		{
			
			arrayfy(i,next_num);
			multiply_arrays(temp_ans,next_num);
			next_num.clear();
		}
		int res_len=temp_ans.size();
		for(i=res_len-1;i>=0;i--)
			cout<<temp_ans[i];

		cout<<endl;
	}
	return 0;
}
