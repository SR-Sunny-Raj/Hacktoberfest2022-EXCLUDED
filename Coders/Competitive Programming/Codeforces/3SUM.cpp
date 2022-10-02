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
#define f(i,x,n) for(ll i=x;i<n;i++)
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
sort(all(a));
int k=n-1,j=n-2,i=n-3;
bool flag=false;
map<int,int> x;
for(int i=0;i<n;i++) x[a[i]%10]++;
for(int i=0;i<10;i++)
{
    for(int j=0;j<10;j++)
    {
        for(int k=0;k<10;k++)
        {int c1=0,c2=0,c3=0;
            if((i+j+k)%10==3)
            {
              if(x[i])
              {
                  x[i]--;
                  c1++;
              }
              if(x[j])
              {
                  x[j]--;
                  c2++;
              }
              if(x[k])
              {
                  x[k]--;
                  c3++;
              }
              if(c1 and  c2 and  c3)
              {
                  flag=true;
                  break;
              }
              else
              {
                  if(c1)
                  {
                      x[i]++;
                  }
                   if(c2)
                  {
                      x[j]++;
                  }
                   if(c3)
                  {
                      x[k]++;
                  }
              }
            }
        }
        if(flag) break;
    }
    if(flag) break;
}
if(flag)
cout<<"YES\n";
else
cout<<"NO\n";
}
return 0;
}