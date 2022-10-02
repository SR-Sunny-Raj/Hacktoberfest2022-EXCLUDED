#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll, ll>
#define vpi vector<pi>
#define vpll vector<pll>
#define sz(x) ((int)(x).size())
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define  uniq(a) a.resize(unique(a.begin(), a.end()) - a.begin());
#define all(x)      (x).begin(), (x).end()
#define inp(x) for(ll&i:x) cin>>i;

int main()
{
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
string s;
cin>>s;
if(n<=1)
{
    cout<<"YES\n";
    
}
else
{ int one=0,zero=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        one++;
        else
        zero++;
    }
    if((zero==1 || one==1 )and n==2)
    cout<<"YES\n";
     else
     cout<<"NO\n";
}
}
return 0;
}