#include<bits/stdc++.h>
	using namespace std;

	void candidate(vector<vector<int>> &arr)
	{
		stack<int> s;

		for(int i=0;i<arr.size();i++)
		{
			s.push(i);
		}

		// elimination
		while(s.size()>1)
		{
			int i=s.top();
			s.pop();
			int j=s.top();
			s.pop();

			if(arr[i][j]==1)
			{
				// i is not celebrity
				s.push(j);
			}
			else
			{
				// j is not celebrity
				s.push(i);
			}
		}

		int cand=s.top();
		s.pop();
		// cout<<cand<<"\n";


		// check its row
		for(int i=0;i<arr[0].size();i++)
		{
			if(arr[cand][i]==1)
			{
				cout<<"none"<<"\n";
				return ;
			}
		}
	 
		// check its column
		for(int i=0;i<arr.size();i++)
		{
			if(i!=cand and arr[i][cand]==0)
			{
				cout<<"none"<<"\n";
				return ;
			}
		}

		cout<<cand<<"\n";
	}
	


// taking input
	void solve()
	{
	int n;
	cin>>n;

	vector<vector<int>> arr(n,vector<int>(n,0));

	for(int i=0;i<n;i++)
	{
			string c;
			cin>>c;
		for(int j=0;j<n;j++)
		{
			arr[i][j]=c[j]-'0';
		}
	}

	candidate(arr);
	}


	int main()
	{
	solve();

	}