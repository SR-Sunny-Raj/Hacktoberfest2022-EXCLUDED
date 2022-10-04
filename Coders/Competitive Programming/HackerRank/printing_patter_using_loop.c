//Hackerank-Problem
//Printing Pattern Using Loops
/*Link:https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true */
#include<stdio.h>
   int main()
    {
        int n,i,j,a=0,b,c;
        scanf("%d",&n);//input from user
        b=2*n-1; //number of rows and columns calculation
        c=b-1;
        int m[b][b];//initializing of 2D-array
        while(n!=0)
        {
            for(i=a;i<=c;i++) //for row
            {
                for(j=a;j<=c;j++) //for column
                {
                    if((i==a)||(i==c)||(j==a)||(j==c))
                    {
                        m[i][j]=n;
                    }
                }
            }
            ++a;
            --n;
            --c;
        }
        //Priniting elements of 2D array
        for(i=0;i<b;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("%d ",m[i][j]);
            }
            printf("\n");
        }
        return 0;
    }

