#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll c,d;
    cin>>c>>d;
    if(c==0&&d==0)
    cout<<0<<endl;
  else if(c-d==0)
  cout<<1<<endl;
  else if(abs(c-d)%2==0)
  cout<<2<<endl;
  else 
  cout<<-1<<endl;
}
return 0;
}