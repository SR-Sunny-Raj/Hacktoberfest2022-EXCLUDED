#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define ff first
#define ss second
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
using namespace std;
 
int main()
{
FAST;
ll t;
cin>>t;
while(t--)
{
ll n;
cin>>n;
vl a(n);
for(int i=0;i<n;i++)
cin>>a[i];
sort(a.begin(),a.end());
for(int i=n-1;i>=(n+1)/2;i--)
cout<<a[i]<<" "<<a[0]<<endl;
/*vector<pair<ll,ll>> ans;
for(int i=n-1;i>=0;i--)
{
 for(int j=i-1;j>=0;j--)
 {
     if(a[i]%a[j]==0 or find(a.begin(),a.end(),a[i]%a[j])==a.end())
     ans.pb({a[i],a[j]});
     if(ans.size()>=n/2) break;
 }
  if(ans.size()>=n/2) break;
}
for(int i=0;i<ans.size();i++)
{ 
cout<<ans[i].first<<" "<<ans[i].second<<endl;

}*/
}
return 0;
}