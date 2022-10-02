/*
                               ꧁༒😈☬☠Sankalp☠︎☬😈༒꧂
*/
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
 
using namespace std;
 
int main()
{
FAST;
ll t;
cin>>t;
while(t--)
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	if (y >= 2 * x) {
		cout << x * (n - 1) + x * (m - 1) << "\n";
		continue;
	}
	int i = 1, j = 1;
	int cost = 0;
	if (m > n) {
		i = n, j = n;
		cost += (n - 1) * y;
		if (2 * y >= 2 * x)cost += (m - n) * x;
		else {
			int rem = m - n;
			if (rem % 2 == 0) cost += rem * y;
			else rem--, cost += x + rem * y;
		}
	}
	else {
		cost += (m - 1) * y;
		if (2 * y >= 2 * x)cost += (n - m) * x;
		else {
			int rem = n - m;
			if (rem % 2 == 0) cost += rem * y;
			else rem--, cost += x + rem * y;
		}
	}
	cout << cost << "\n";
}
return 0;
}