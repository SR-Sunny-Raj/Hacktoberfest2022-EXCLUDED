#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> b(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}

		int mn = INT_MAX;
	
		for (int i = 0; i < n; i++)
		{
			mn = min(mn, (a[0] + b[i]) % n);

		}

		int j = 0;
		vector<int> cand;
		for (int i = 0; i < n; i++)
		{
			if ((a[0] + b[i]) % n == mn)
			{
				cand.push_back(i);

			}
		}

		vector<vector<int> > ans;
		for (int i = 0; i < cand.size(); i++)
		{
			vector<int> k;
			for (int j = 0; j < n; j++)
			{
				k.push_back((a[j] + b[(j + cand[i]) % n]) % n);
			}
			ans.push_back(k);
		}
		sort(ans.begin(), ans.end());
		for (int i = 0; i < n; i++)
		{
			cout << ans[0][i] << " ";
		}
		cout << endl;
	}

 return 0;
}
