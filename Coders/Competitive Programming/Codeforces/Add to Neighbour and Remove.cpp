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
inp(a);
ll sum=0;
for(int i=0;i<n;i++)
{
sum+=a[i];
}
ll ans=INT_MAX;

for(int i=1;i<=n;i++)
{
    bool flag=false;
  ll x=sum/i;
  if(sum%i==0)
  { int c=0;
   ll s=0;
      for(int i=0;i<n;i++)
      { 
        s+=a[i];
        if(s==x)
        {
            s=0;
            c++;
        }
      }
      if(c==i and s==0)
      { flag=true;
          ans=min(ans,n-i);
      }
  }
  
}
cout<<ans<<endl;
}
return 0;
}