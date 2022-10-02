#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void heapify(vector<int> &a,int n,int i)
{
    int mx=i;
    int l=2*i+1;
    int r=2*i+2;
   
   if(l<n and a[l]>a[mx])
   mx=l;
   if(r<n and a[r]>a[mx])
   mx=r;
   if(mx!=i)
   {
    // largest is not root
    swap(a[mx],a[i]);
    heapify(a,n,mx);
   }
}
void heapsort(vector<int> &a,int n)
{
    // find  non leaf element which is at largest index
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    // one by one extract element from heap and push it at end
    for(int i=n-1;i>0;i--)
    {
        swap(a[i],a[0]);
        // max heap on reduced heap 
        heapify(a,i,0);
    }
}
void heapifydec(vector<int> &a,int n,int i)
{
    int mx=i;
    int l=2*i+1;
    int r=2*i+2;
   
   if(l<n and a[l]<a[mx])
   mx=l;
   if(r<n and a[r]<a[mx])
   mx=r;
   if(mx!=i)
   {
    // largest is not root
    swap(a[mx],a[i]);
    heapify(a,n,mx);
   }
}
void heapsortdec(vector<int> &a,int n)
{
    // find  non leaf element which is at largest index
    for(int i=n/2-1;i>=0;i--)
    {
        heapifydec(a,n,i);
    }
    // one by one extract element from heap and push it at end
    for(int i=n-1;i>0;i--)
    {
        swap(a[i],a[0]);
        // max heap on reduced heap 
        heapifydec(a,i,0);
    }
}
void print(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    
} 
int main()
{
ll t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
  vector<int> a(n);
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 heapsortdec(a,n);
//  heapsort(a,n);
 print(a);
}
return 0;
}