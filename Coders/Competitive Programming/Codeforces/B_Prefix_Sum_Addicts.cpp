// Max
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Max cout.tie(NULL);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;

//Constants
const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()

// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

//Code
void max(){

    ll n,k;
    cin>>n>>k;
    vector<int> v(n+1);
    for(int i=n-k+1;i<=n;i++){
        cin>>v[i];
    }
    vector<int> pre(n+1);
    if(k==1){
        cout<<"Yes\n";
        return;
    }
     for(int i=n-k+2;i<=n;i++){
        pre[i]=v[i]-v[i-1];
    }
    if(!is_sorted(pre.begin()+n-k+2,pre.end())){
        cout<<"No\n";
        return;
    }
    if(v[n-k+1]>pre[n-k+2]*(n-k+1)){
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";



   





}
//Main

int main(){

 Code By Max
ll t;
cin>>t;
fl(i,t){
max();
}
// max();
// fl(i,t){//Kickstart
//cout<<Case #<<i+1<<:; // string shi kr dena
//     max();
//     cout<<endl;
// }
    return 0;
}
