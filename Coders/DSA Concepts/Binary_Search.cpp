#include <bits/stdc++.h>

#include <iostream>

using namespace std;

 

int binarySearch(int array[],int p,int l,int h){
    while(l<=h){
        int m=l+(h-l)/2;
        if(array[m]==x)
            return m;
        if(arr[m]<x)
            l=m+1;
        else
            h=m-1;
    }
    return -1;
}
int main(void){
    int array[]={6,4,5,8,9,2,3};
    int k=4;
    int n= sizeof(array)/sizeof(array[0]);
    int sol=binarySearch(array,k,0,n-1);
    if(sol==-1)
        printf("Not exist");
    else
        printf("Element is exists at index %d",sol);
}
