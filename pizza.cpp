#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	//vector<string> pizzas(n);
	unordered_map<string,int> m;	
	string pizza;
	for(int i=0;i<n;i++)
	{
		cin>>pizza;
		m[pizza]++;

	}

	int count=1;
	if(m.find("3/4")!=m.end())
		count+=m["3/4"];
	
	if(m.find("1/2")!=m.end())
	{
		if(m["1/2"]%2){
			count+=m["1/2"]/2+1;
			m["1/2"]=1;
		}
		else{
			count+=m["1/2"]/2;
			m["1/2"]=0;
		}
		// m["1/2"]-=m["1/2"]/2;
	}
	if(m.find("1/4")!=m.end())
	{
		if(m.find("3/4")!=m.end())
		{
			m["1/4"]-=m["3/4"];
		}
		if(m.find("1/2")!=m.end())
		{
			if(m["1/2"]>0)
			{
				m["1/4"]-=2;
			}
		}
		if(m["1/4"]>0)
		{
			if(m["1/4"]%4)
			{
				count+=m["1/4"]/4 + 1;
			}
			else
			{
				count+=m["1/4"]/4;
			}
		}
	}
	cout<<count<<endl;
	return 0;



}