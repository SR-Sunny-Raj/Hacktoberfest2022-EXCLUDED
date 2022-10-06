/*Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.
https://leetcode.com/problems/length-of-last-word/
*/

class Solution {
    public int lengthOfLastWord(String s) {
        int cnt=0;
        int n=s.length();int m=n-1;
        while(Character.isLetter(s.charAt(m)) == false){
            m--;
        }
       
        for(int i=m;i>=0;i--){
          
            if(s.charAt(i)==' '){
                break;
            }
            else{
                cnt++;
            }
        
        }
        return cnt;
    }
}
