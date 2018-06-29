#include<bits/stdc++.h>
//#include<stdio.h>
//#include<iostream>

using namespace std;

int main()
{
	int i,j,k,l, num1, num2;
	int n;
	cin >> n;
	while(n--)
	{
		cin >> num1;
		cin >> num2;
		vector<int> n1, n2;
		//int rem1=0, rem2=0;
		while(num1)
		{
			//cout<<num1%10<<endl;
			n1.push_back(num1%10);
			num1=num1/10;

		}
		while(num2)
		{
			//cout<<num2%10<<endl;
			n2.push_back(num2%10);
			num2=num2/10;
		}
		int len1=n1.size();
		int len2=n2.size();

		for(i=0;i<len1;i++)
		{
			if(n1[i]!=0)
			{
				break;
			}
		}
		// for(j=len1-1;j>=0;j--)
		// {

		// }

		vector<int> n1_1, n2_1;
		for(j=i;j<len1;j++)
		{
			n1_1.push_back(n1[j]);
			//cout<<n1[j];
		}

		for(i=0;i<len2;i++)
		{
			if(n2[i]!=0)
			{
				break;
			}
		}
		// for(j=len1-1;j>=0;j--)
		// {

		// }

		for(j=i;j<len2;j++)
		{
			n2_1.push_back(n2[j]);
			//cout<<n2[j];
		}

		k=n1_1.size();
		l=n2_1.size();

		vector<int> sum;
		int p=min(k,l);
		int rem=0;
		while(p--)
		{
			int q=n1_1[k-1]+n2_1[l-1];
			sum.push_back((q+rem)%10);
			rem=(q+rem)/10;
			k--;
			l--;

		}
		if(k>l)
		{
			for(i=k-1;i>=0;i--)
			{
				sum.push_back((n1_1[i]+rem)%10);
				rem=(n1_1[i]+rem)/10;
			}
		}
		else if(l>k)
		{
			for(i=l-1;i>=0;i--)
			{
				sum.push_back((n2_1[i]+rem)%10);
				rem=(n2_1[i]+rem)/10;
			}
		}
		else if(rem>0)
		{
			sum.push_back(rem);
			rem=0;
		}

		if(rem>0)
		{
			sum.push_back(rem);
			rem=0;
		}


		int len3=sum.size();
		for(i=0;i<len3;i++)
		{
			if(sum[i]!=0)
			{
				break;
			}
		}
		vector<int> rev_sum;
		for(j=len3-1;j>=i;j--)
		{
			rev_sum.push_back(sum[j]);

		}
		int sar=rev_sum.size();
		//cout<<"size:::"<<sar<<endl;
		long long int finalsum=0;
		for(int m=0;m<sar;m++)
		{
			finalsum+=rev_sum[m]*(pow(10,m));

		}
		cout << finalsum << endl;

	}
	return 0;

}