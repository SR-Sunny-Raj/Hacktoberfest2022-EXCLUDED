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
void IOS()
{
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
   #ifndef ONLINE_JUDGE 
  #endif
}
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
 
ll mypow(ll a, ll b) {
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll mypow(ll a, ll b, ll m) {
a %= m;
ll res = 1;
while (b > 0) {
if (b & 1)
res = res * a % m;
a = a * a % m;
b >>= 1;
}
return res;
}
const  ll mod = 1e9 + 7;
const  ll  inf = 1e16;
const  ll N = 2e5 + 10;
 
int main()
{
IOS();
FAST;
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
vll a(n);
for(int i=0;i<n;i++) cin>>a[i];

vector<int> v(32);
for(int i=31;i>=0;i--)
{
    for(int j=0;j<n;j++)
    {
        if((1<<i) &a[j])
        {
            v[i]++;
        }
    }
}
int ans=0;
for(int i=31;i>=0;i--)
if(v[i]>1)
{
    ans+=(1<<i);
}
cout<<ans<<endl;
                                         // METHOD 2-------------------------------------->
// sort(a.begin(),a.end());
// int x=a[n-1],ans=0;
// for(int i=n-2;i>=0;i--)
// {
//  ans=ans|(a[i]&x);
//  x=x|a[i];
// }
// cout<<ans<<endl;
                                          //TLE------------------------------------------->
//maxpq b;
/* for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        b.push(a[i]&a[j]);
    }
}
maxpq d=b;
// while(!d.empty())
// {
//     cout<<d.top()<<" ";
//     d.pop();
// }
while(b.size()!=1)
{
  int x=b.top();
  b.pop();
  int y=b.top();
  b.pop();
  b.push(x|y);
}
cout<<b.top()<<endl; */
}
return 0;
}