// This is a question from codeforces to find whether it is possible for train to travel from one station to the other.
// The Question link is :
// https://codeforces.com/contest/1702/problem/C

// Solution to the above problem is-

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multimap<int,int>m,mm;
        vector<int>v;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            v.push_back(p);
            m.insert({p,i});
        }
        for(int i=n-1;i>=0;i--){
            mm.insert({v[i],i});
        }


        for(int i=0;i<k;i++){
            int a,b,a_pos,a_pos1,b_pos,b_pos1;
            cin>>a>>b;
            auto ita=m.find(a);
            if(ita!=m.end()){
                a_pos=(*ita).second;
            }
            else{
                cout<<"no"<<endl;
                continue;
            }
            auto ita1=mm.find(a);
            a_pos1=(*ita1).second;

            auto itb=m.find(b);
            if(itb!=m.end()){
                b_pos=(*itb).second;
            }
            else{
                cout<<"no"<<endl;
                continue;
            }
            auto itb1=mm.find(b);
            b_pos1=(*itb1).second;



            if(b_pos>a_pos || b_pos1>a_pos1 || b_pos>a_pos1 || b_pos1>a_pos){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }

        }
    }
    return 0;
}
