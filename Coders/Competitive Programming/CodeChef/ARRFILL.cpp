#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long a[100000000]={0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m,sum=0;
        cin >> n >> m;
    //  vector<ll> a(n,0);
      a[n]={0};
        for (ll i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            for (ll j = 0; j < n; j++)
            {
                if ((j + 1) % y == 0)
                    continue;
                else
                {
                    if (x > a[j])
                     a[j]=x;
                }
            }
        }
      for(ll i=0;i<n;i++)
      sum+=a[i];
        cout << sum << endl;
    }
    return 0;
}