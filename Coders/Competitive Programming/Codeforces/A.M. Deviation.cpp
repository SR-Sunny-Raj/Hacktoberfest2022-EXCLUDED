#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define ff first
#define ss second
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

using namespace std;
 
int main()
{
FAST;
ll t;
cin>>t;
while(t--)
{
ll a1,a2,a3;
cin>>a1>>a2>>a3;
if((a1+a3-2*a2)%3==0)
cout<<0<<endl;
else
{
  cout<<1<<endl;
}
}
return 0;
}