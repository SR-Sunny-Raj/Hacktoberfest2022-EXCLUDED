#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
 
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
ll n1=n;
ll c=0;
while(n1>0)
{ int t=0;
while(n1%2==0)
{
    n1/=2;
   t++;
}
n1=n1-1;
if(t>=2)
{
    c++;
}
}
if(n%2==0)
{
if(c==0)
cout<<"Bob"<<endl;
else
cout<<"Alice"<<endl;
}
else
{
 if(c==0)
 cout<<"Alice"<<endl;
 else
 cout<<"Bob"<<endl;
}

}
return 0;
}