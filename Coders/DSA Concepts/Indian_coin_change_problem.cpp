#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;

   vector<int> a(n);
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }


   int x;
   cin>>x;


   sort(a.begin(), a.end(), greater<int>()); //greater is used to sort in decresing order
   
   int ans=0;
   for(int i=0;i<n;i++)
   {
      ans += x/a[i];
      x -= x/a[i]*a[i];
   }

   cout<<"Minimum no. of coins to be used are "<<ans<<endl;

   return 0;
}