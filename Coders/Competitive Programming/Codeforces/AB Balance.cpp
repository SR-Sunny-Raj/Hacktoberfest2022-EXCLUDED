#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
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
string s;
cin>>s;
int a=0,b=0;
vi v1,v2;
for(int i=0;i<s.length();i++)
{
  if(s[i]=='a'&&s[i+1]=='b'&&i!=s.length()-1)
  {
  a++;
  v1.push_back(i);
  }
  if(s[i]=='b'&&s[i+1]=='a'&&i!=s.length()-1)
{b++;

  v2.push_back(i);  }
}
if(a==b)
{cout<<s<<endl;
continue;
}
else if(a==b+1)
{
    for(int i=0;i<s.length()-1;i++)
    {
      cout<<s[i];
    }
    cout<<"a"<<endl;
    continue;
}
else
{
    for(int i=0;i<s.length()-1;i++)
    {
      cout<<s[i];
    }
    cout<<"b"<<endl;
    continue;
    
}
}
return 0;
}