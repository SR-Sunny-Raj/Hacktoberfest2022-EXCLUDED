
#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define endl "\n"
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
 
using namespace std;

 
int main()
{
  
FAST;
ll t;
cin>>t;
while(t--)
{
  ll a,b;
  cin>>a>>b;
  while(1)
  {
      ll x=__gcd(a,b);
      if(x==1)
      break;
      else
      a/=x;
  }
  if(a==1)
  cout<<"YES\n";
  else
  cout<<"NO\n";

}
return 0;
}