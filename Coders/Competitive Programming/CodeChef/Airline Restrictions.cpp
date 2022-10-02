#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
ll gcd(ll a, ll b) {if (!b)return a; return gcd(b, a % b);}
 
ll mod_pow(ll a, ll n, ll mod)  //(a^n)%mod
{   ll res = 1;
   while (n) {
if (n & 1) res = (res * a) % mod; n /= 2; a = (a * a) % mod;
  }
 return res;
}
 
ll lcm(ll a , ll b) {
   return a * b * 1LL / gcd(a , b);
}
using namespace std;
 
int main()
{
FAST;
ll t;
cin>>t;
while(t--)
{
int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
if((a+b<=d&&c<=e)||(a+c<=d&&b<=e)||(b+c<=d&&a<=e))
cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}