#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	while(1)
	{
		int i, num_of_trucks;
		cin>>num_of_trucks;
		if(num_of_trucks==0)
			break;

		vector<int> trucks_order(num_of_trucks);
		//int start=1;
		for(i=0;i<num_of_trucks;i++)
			cin>>trucks_order[i];

		stack<int> order;

		int num=1;
		i=0;

		// while(trucks_order[i]!=1)
		// {
		// 	order.push(trucks_order[i]);
		// 	i++;
		// }
		num=1;
		// i++;
		// int flag=0;

		for(i=0;i<num_of_trucks;i++)
		{
			if(trucks_order[i]==num)
			{
				num++;
			}
			else if(!order.empty())
			{
				if(order.top()==num)
				{
					num++;
					order.pop();
					i--;
				}
				else
				{
					order.push(trucks_order[i]);
				}

			}
			else if(order.empty())
			{
				order.push(trucks_order[i]);
			}

		}
		while(!order.empty() && num==order.top())
		{
			num++;
			order.pop();
		}

		if(order.empty())
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}


		// while(num<num_of_trucks)
		// {
		// 	//if(!order.empty())
		// 	//{
		// 		if(!order.empty() && order.top()==num)
		// 		{
		// 			order.pop();
		// 			num++;
		// 		}
		// 		else if(i<num_of_trucks && trucks_order[i]==num)
		// 		{
		// 			i++;
		// 			num++;
		// 		}
		// 		else
		// 		{
		// 			flag=1;
		// 			cout<<"no"<<endl;
		// 			break;
		// 		}


		// 	//}
		// // }
		// if(flag!=1)
		// 	cout<<"yes"<<endl;
		
	

	}
return 0;
}