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
int n;
cin>>n;
vector<pair<ll,ll>> p;
int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
cin>>b[i];
for(int i=0;i<n;i++)
{
    p.push_back(make_pair(a[i],b[i]));
}
vi v;
    for(int i=0;i<n;i++)
    {  int t=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            else
            {  if(p[i].first==p[i].second)
               { 
                   if(p[j].first==p[j].second){
                if(abs(p[i].first-p[j].first)==abs(p[i].second-p[j].second))
                {
                    t++;
                }
                   }
                else if(p[j].first!=p[j].second)
                {
                    if(abs(p[i].first-p[j].first)==abs(p[i].second-p[j].second)||((p[j].second==p[i].second)||(p[j].first==p[i].first)))
                      t++;
                    else
                    {
                         if(p[i].first!=p[j].first||abs(p[i].first-p[j].first)!=abs(p[i].second-p[j].second))
                         t++;
                        if(p[i].second!=p[j].second||abs(p[i].first-p[j].first)!=abs(p[i].second-p[j].second))
                         t++; 
                    }
                    
                }
               /* else 
                { if(abs(p[i].first-p[j].first)==abs(p[i].second-p[j].second)||((p[j].second==p[i].second)||(p[j].first==p[i].first)))
                      t++;
                      else
                    t=t+2;
                }*/
               }
              else
              {
                 if(abs(p[i].first-p[j].first)==abs(p[i].second-p[j].second)||((p[j].second==p[i].second)||(p[j].first==p[i].first)))
                 t++; 
                 else
                 {
               if(p[i].first!=p[j].first)
               t++;
               if(p[i].second!=p[j].second)
               t++; 
                 }  
              }
            }
        }
        v.push_back(t);
    }
    int ans=*min_element(v.begin(),v.end());
    cout<<ans<<endl;
}
return 0;
}