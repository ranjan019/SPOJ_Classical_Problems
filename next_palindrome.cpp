#include<bits/stdc++.h>

using namespace std;


int check_palin(string num)
{
	int s=num.size(),i;
	for(i=0;i<=s/2;i++)
	{
		if(num[i]!=num[s-1-i])
			return 0;
	}
	
	return 1;

}
void copy_l_to_r(vector<int> &num_left_array, vector<int> &num_right_array)
{
	int sl=num_left_array.size(), sr=num_right_array.size();

	for(int i=0;i<sl;i++)
	{
		if(i<sr)
		{
			num_right_array[i]=num_left_array[i];
		}
		else
			num_right_array.push_back(num_left_array[i]);
	}

}

void print_final(vector<int> &num_left_array, vector<int> &num_right_array, string num, int odd, int flag999)
{
	int i,j,k;
	
	int s=num.size();
	for(i=0;i<s/2;i++)
	{
		if(num[i]-'0'!=9)
			flag999=0;

	}
	if(flag999==1 && s>1)
	{
		num_right_array.erase(num_right_array.begin());

	}
	else if(s==1 && flag999)
	{
		cout<<11<<endl;
		return;
	}
	int sl=num_left_array.size(), sr=num_right_array.size();
	if(odd==1)
	{
		for(i=sl-1;i>=0;i--)
		{
			cout<<num_left_array[i];
		}
		cout<<num[s/2]-'0';
		for(i=0;i<sr;i++)
		{
			cout<<num_right_array[i];
		}
		cout<<endl;

	}
	else
	{
		for(i=sl-1;i>=0;i--)
		{
			cout<<num_left_array[i];
		}
		//cout<<num[s/2]-'0';
		for(i=0;i<sr;i++)
		{
			cout<<num_right_array[i];
		}
		cout<<endl;
	}
}
void convert_to_array(string num, vector<int> &num_left_array, vector<int> &num_right_array)
{
	int s=num.size();
	int i,j,k;
	if(s%2)
	{
		k=s/2+1;
	}
	else
		k=s/2;


	for(i=s/2-1;i>=0;i--)
	{
		num_left_array.push_back(num[i]-'0');
	}
	for(i=k;i<s;i++)
	{
		num_right_array.push_back(num[i]-'0');
	}

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string num;
		vector<int> num_array, num_left_array, num_right_array;
		cin>>num;
		int s=num.size();
		int flag_palin=0, flag_odd=0;

		if(num.size()%2)
			flag_odd=1;

		convert_to_array(num, num_left_array, num_right_array);
		flag_palin=check_palin(num);
		int s_left=num_left_array.size();

		if(flag_palin==1)
		{
			int flag999=1;
			for(int z=0;z<s;z++)
			{
				if(num[z]-'0'!=9)
					flag999=0;
			}

			int carry_l=0;
			if(flag_odd==1)
			{
				
				if(num[s/2]-'0'==9)
				{
					num[s/2]='0';
					
					carry_l=1;
				}
				else
					num[s/2]+=1;
			}
			else
				carry_l=1;

			int sl=num_left_array.size();
			for(int i=0;i<sl;i++)
			{	
				int temp=num_left_array[i]+carry_l;
				num_left_array[i]=(temp)%10;
				carry_l=temp/10;
			}
			if(carry_l>0)
			{
				num_left_array.push_back(carry_l);
			}
			copy_l_to_r(num_left_array,num_right_array);
			print_final(num_left_array,num_right_array,num,num.size()%2,flag999);
		}
		else
		{
			for(int j=0;j<s_left;j++)
			{
				if(num_left_array[j]!=num_right_array[j])
				{
					if(num_left_array[j]>num_right_array[j])
					{
						copy_l_to_r(num_left_array,num_right_array);
						print_final(num_left_array,num_right_array,num,num.size()%2,0);
					}
					else
					{
						int carry_l=0;
						if(flag_odd==1)
						{
							
							if(num[s/2]-'0'==9)
							{
								num[s/2]='0';
								
								carry_l=1;
							}
							else
								num[s/2]+=1;
						}
						else
							carry_l=1;


						int sl=num_left_array.size();
						for(int i=0;i<sl;i++)
						{	
							int temp=num_left_array[i]+carry_l;
							num_left_array[i]=(temp)%10;
							carry_l=temp/10;
						}
						if(carry_l>0)
						{
							num_left_array.push_back(carry_l);
						}
						copy_l_to_r(num_left_array,num_right_array);
						print_final(num_left_array,num_right_array,num,num.size()%2,0);
						break;

					}
				}
			}

		}

	}
	return 0;
}