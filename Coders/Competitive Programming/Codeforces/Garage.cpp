// This is a problem on codeforces.
// LINK: https://codeforces.com/contest/1725/problem/G


// Solution of the problem

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, d, m, p, dcount=0, pos=0, sum=0;
    cin>>n;
    if(n==1){
        cout<<3;
    }else{
        n--;
        if(n%3==0){
            cout<<((n/3)+1)*4;
        }else if(n%3==2){
            cout<<(((n+2)/3)+1)*4 -1;
            
        }else if(n%3==1){
            cout<<(((n+2)/3)+1)*4 -3;
            
        }
        
    }
    
}
