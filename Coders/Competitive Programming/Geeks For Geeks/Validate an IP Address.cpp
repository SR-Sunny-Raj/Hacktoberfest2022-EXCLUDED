/* Problem Link:-https://practice.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/0*/
//solution
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
 */
class Solution {
    public:
        int isValid(string s) {
            s=s+".";
            int size=s.size(),c=0,i,t;
            string n_s="";
           for(i=0;i<size;i++)
           
           {
               if(s[i]=='.'&&s[i+1]=='.')
               return 0;
               
               if(s[i]=='.')
               { c++;
               if(n_s.size()==1&&isdigit(n_s[0])!=1)
            return 0;
               
                   if((n_s.size()>1&&n_s[0]=='0')||n_s.size()>3||stoi(n_s)>255)
                   return 0;
                   
                   n_s.clear();
               }
               else{
                   
                   n_s+=s[i];
           }
        }
        if(c==4)
        return 1;
        return 0;
      }
        
};

//{ Driver Code Starts.

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } 
