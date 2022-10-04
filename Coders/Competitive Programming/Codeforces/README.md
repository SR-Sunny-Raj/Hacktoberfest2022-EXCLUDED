Write down the solution to any of the problem present on the Codeforces Platform<br>
In order to make your contribution count you need to either write the problem statement or add the link to the problem along with your solution.

problem link-->
https://codeforces.com/problemset/problem/1730/C

My solution in c++ -->

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        multiset<int> m;
        int a[n];
        int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            a[i]=(int)s[i]-48;
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        int min=max;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]!=-1)
            {
                if(a[i]<min)
                {
                    m.insert(a[i]);
                    int p=a[i];
                    //a[i]=-1;
                    for(int j=i-1;j>=0;j--)
                    {
                        if(a[j]>p)
                        {
                            if(a[j]==9)
                            {m.insert(9);}
                            else
                            {m.insert(a[j]+1);}
                            a[j]=-1;
                        }
                        // else if(a[j]==p)
                        // {
                        //     m.insert(a[j]);
                        //     a[j]=-1;
                        // }
                        
                        
                    }
                    min=a[i];
                    a[i]=-1;
                }
                else
                {
                    m.insert(a[i]);
                    a[i]=-1;
                    
                }
            }
          
            
        }
        for(auto value:m)
        {
            cout<<value;
        }
        cout<<endl;
        
       
    }
} 




