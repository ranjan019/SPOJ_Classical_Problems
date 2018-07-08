#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i,j,k;
	cin>>t;
	while(t--)
	{
		int d;
		string inp;
		cin>>d;
		cin>>inp;
		map <string,int> p_list;
		p_list["TTT"]=0;
		p_list["TTH"]=0;
		p_list["THT"]=0;
		p_list["THH"]=0;
		p_list["HTT"]=0;
		p_list["HTH"]=0;
		p_list["HHT"]=0;
		p_list["HHH"]=0;

		for(i=0;i<38;i++)
		{
			string temp="";
			for(j=0;j<=2;j++)
			{
				
				temp+=inp[i+j];

			}

			p_list[temp]++;
		}
		cout<<d;
		for(auto l=p_list.rbegin();l!=p_list.rend();++l)
		{	
			//cout<<l->first<<endl;
			cout<<" "<<l->second;
		}
		cout<<endl;

	}
	return 0;
}