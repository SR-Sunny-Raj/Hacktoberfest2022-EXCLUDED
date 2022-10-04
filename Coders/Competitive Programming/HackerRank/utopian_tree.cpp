//problem link:
https://www.hackerrank.com/challenges/utopian-tree/problem?h_r=internal-search

level: easy 20
problem name: Utopian Tree

Code Here:
#include<iostream>
#include<stdio.h>
using namespace std;
void utopian_tree(int a[],int test)
{int h=0;
int store[70];
for(int i=0;i<60;i++){
	if(i%2!=0){
		 h=h *2;
		store[i]=h;
	}
	
	else{
		h = h+1;
		store[i] =h ;
	}

}
for(int i =0;i<test;i++){
	cout<<store[a[i]]<<"\n";
}
	
	

	
}
int main(){
	int t;
	cin>>t;
	int a[60];
	for(int i=0;i<t;i++)
	cin>>a[i];
	
utopian_tree(a,t);
	
}

