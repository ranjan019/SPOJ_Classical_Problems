#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		string expr, result;
		cin>>expr;
		stack<char> my_stack;
		int expr_len=expr.size();
		for(i=0;i<expr_len;i++)
		{
			if(expr[i]=='*' || expr[i]=='+' || expr[i]=='-' || expr[i]=='/' || expr[i]=='^')
			{
				my_stack.push(expr[i]);
			}
			else if(expr[i]==')')
			{
				char temp= my_stack.top();
				result.push_back(temp);
				my_stack.pop();
			}
			else if(expr[i]!='(')
			{
				result.push_back(expr[i]);
			}
		}
		while(!my_stack.empty())
		{
			char temp= my_stack.top();
			result.push_back(temp);
			my_stack.pop();
		}
		cout<<result<<endl;
	}
	return 0;
}