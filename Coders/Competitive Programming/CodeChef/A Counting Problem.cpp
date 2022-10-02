/*
                               ꧁༒😈☬☠Sankalp☠︎☬😈༒꧂
*/
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
ll n;
cin>>n;
vector<int> b(n-1);
for(int i=0;i<n-1;i++)
{
    cin>>b[i];
}
int mx=*max_element(b.begin(),b.end());
cout<<100000*2+1-2*mx<<endl;
}
return 0;
}