#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> mp={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string balanced(string s){
    stack<char> st;
    for(char brac:s){
        if(mp[brac]<0){
            st.push(brac);
        }
        else{
            if(st.empty()){return "NO";}
            char top=st.top();
            st.pop();
            if(mp[top]+mp[brac]!=0){return "NO";}
        }
    }
    if(st.empty()){return "YES";}
    return "NO";
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<balanced(s)<<endl;
    }
}
