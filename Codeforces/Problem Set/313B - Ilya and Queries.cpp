#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
int dp[2000055];
int main()
{
	string s;
	cin>>s;
	for(int i=1;i<s.size();i++)
	{
		dp[i]=dp[i-1]+(s[i]==s[i-1]);
	}
	int n;
	cin>>n;
	while(n--)
	{
		int x,y;
		cin>>x>>y;
		cout<<dp[y-1]-dp[x-1]<<endl;
	}

    return 0;
}