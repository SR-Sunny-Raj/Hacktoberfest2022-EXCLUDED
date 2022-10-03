#include<stdio.h>
int main(){
    int n,i,m;
    int grade[60];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&grade[i]);
        m=grade[i]/5;
    
        
        if(grade[i]>37){
            if(grade[i]%5==0){
                printf("%d\n",grade[i]);
            }
            else if((((m+1)*5)-grade[i])<3){
                printf("%d\n",((m+1)*5));
            }
            else if((((m+1)*5)-grade[i])>3){
                printf("%d\n",grade[i]);
        }
            else if((((m+1)*5)-grade[i])==3){
                printf("%d\n",grade[i]);
            }
        }
        else{
            printf("%d\n",grade[i]);
        }
        }
    }

