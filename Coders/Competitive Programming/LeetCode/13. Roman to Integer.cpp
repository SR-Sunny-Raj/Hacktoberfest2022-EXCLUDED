// link : https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        int i;
        for(i = 0; i<s.size() ; i++){
            if(s[i] == 'I' && s[i+1] == 'V'){
                num+=4;
                i++;
                continue;
            }
                
            if(s[i] == 'I' && s[i+1] == 'X'){
                num+=9;
                i++;
                continue;
            }
                
            if(s[i] == 'X' && s[i+1] == 'L'){
                num+=40;
                i++;
                continue;
            }
            
            if(s[i] == 'X' && s[i+1] == 'C'){
                num+=90;
                i++;
                continue;
            }
            
            if(s[i] == 'C' && s[i+1] == 'D'){
                num+=400;
                i++;
                continue;
            }
            
            if(s[i] == 'C' && s[i+1] == 'M'){
                num+=900;
                i++;
                continue;
            }
            
            if(s[i] == 'I'){num++;continue;}
            if(s[i] == 'V'){num+=5;continue;}
            if(s[i] == 'X'){num+=10;continue;}
            if(s[i] == 'L'){num+=50;continue;}
            if(s[i] == 'C'){num+=100;continue;}
            if(s[i] == 'D'){num+=500;continue;}
            if(s[i] == 'M'){num+=1000;continue;}
        }

        return num;
    }
};