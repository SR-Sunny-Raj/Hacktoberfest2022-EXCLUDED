Problem Link -: https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/
Solution -:
class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[0]!=b[0])return a[0]>b[0];
        return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
       
        sort(p.begin(),p.end(),cmp);
        int _max=INT_MIN,ans=0;
        for(auto it:p){
            if(it[1]<_max){
                ans++;
            }else{
                _max=it[1];
            }
        }
        return ans;
    }
};