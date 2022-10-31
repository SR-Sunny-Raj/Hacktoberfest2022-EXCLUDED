#include<bits/stdc++.h>
using namespace std;
void countSmallerRight(int arr[],int n)
{
	set<int> s;
	int ct[n];
	for(int i=n-1;i>=0;i--)
	{
		s.insert(arr[i]);
		set<int> ::iterator it;
		it=s.lower_bound(arr[i]);
		ct[i]=distance(s.begin(),it);
	}
	for(int i=0;i<n;i++)
	cout<<ct[i]<<" ";
}
int main()
{
	int n,ans;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
countSmallerRight(arr,n);
	return 0;
}
