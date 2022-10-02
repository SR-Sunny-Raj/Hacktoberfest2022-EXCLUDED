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
 
int main()
{
IOS();
FAST;
ll t;
cin>>t;
while(t--)
{
ll n,k;
cin>>n>>k;
string s;
cin>>s;
vector<string> v;
for(int i=0;i<s.size();i++)
{
string a="";
if(i+k>s.size()) break;
for(int j=i; j<k+i;j++)
a+=s[j];
v.pb(a);
}

ll x=0;
if(v.size()==1)
{
    
}
for(int i=0;i<v.size();i++)
{
cout<<v[i]<<" ";


}
cout<<x<<endl;
}
return 0;
}