#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int tr=t;
	while(t--)
	{
		int term,flag=0;
		cin>>term;
		float root=sqrt(1+8*term);
		//cout<<"root::"<<root<<endl;
		if(float(root) - int(root) > 0)
		{	
			flag=1;
			
		}
		//cout<<"flag::"<<flag<<endl;
		int level=(-1+root)/2;
		//cout<<"level::"<<level<<endl;

		int sum_upto_level=(level*(2+(level-1)))/2;
		//cout<<"sum_upto_level::"<<sum_upto_level<<endl;
		int x,y,next_steps;
		if(flag==0)
		{
			if(level%2)
			{
				x=1;
				y=level;
				//cout<<"x:"<<x<<" y:"<<y<<endl;
			}
			else
			{
				x=level;
				y=1;
				//cout<<"x:"<<x<<" y:"<<y<<endl;
			}
		}
		else
		{
			next_steps = term - sum_upto_level;
			//cout<<"next_steps::"<<next_steps<<endl;
			if(level%2)
			{
				x=1;
				y=level;
				//cout<<"x:"<<x<<" y:"<<y<<endl;
				y++;
				next_steps--;
				while(next_steps--)
				{
					x++;
					y--;
				}
				//cout<<"after next steps"<<"x:"<<x<<" y:"<<y<<endl;
			}
			else
			{
				x=level;
				y=1;
				//cout<<"x:"<<x<<" y:"<<y<<endl;
				x++;
				next_steps--;
				while(next_steps--)
				{
					x--;
					y++;
				}
				//cout<<"after next steps"<<"x:"<<x<<" y:"<<y<<endl;
			}
		}

		cout<<"TERM "<<term<<" IS "<<x<<"/"<<y<<endl;


	}
	return 0;
}