//
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k,l;

	while(1)
	{
		int columns, rows, code_len;
		cin>>columns;
		if(columns==0)
			break;

		string code;
		cin>>code;
		code_len=code.size();
		rows=code_len/columns;

		for(i=0;i<columns;i++)
		{
			for(j=0;j<rows;j++)
			{
				if(j%2)
				{
					cout<<code[(j)*columns + columns - i -1];

				}
				else
					cout<<code[j*columns + i];
			}
		}
		cout<<endl;

	}
	return 0;
}
