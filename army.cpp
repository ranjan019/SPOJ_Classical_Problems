#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int NG, NM, i;
		cin>>NG>>NM;
		vector<int> godzillas(NG), mgodzillas(NM);
		for(i=0;i<NG;i++)
			cin>>godzillas[i];
		for(i=0;i<NM;i++)
			cin>>mgodzillas[i];

		sort(godzillas.begin(),godzillas.end());
		sort(mgodzillas.begin(),mgodzillas.end());

		int NGdummy=0, NMdummy=0;
		while(NGdummy<NG && NMdummy<NM)
		{
			if(godzillas[NGdummy]<mgodzillas[NMdummy])
			{
				//godzillas.erase(godzillas.begin());
				NGdummy++;
			}
			else
			{
				//mgodzillas.erase(mgodzillas.begin());
				NMdummy++;
			}
		}
		if(NMdummy==NM)
			cout<<"Godzilla"<<endl;
		else
			cout<<"MechaGodzilla"<<endl;
	}
	return 0;
}