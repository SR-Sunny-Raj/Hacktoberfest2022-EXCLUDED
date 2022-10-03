

//contributed by Muhammad Saad 
//https://www.github.com/MuhammadSaad000

//Link to the problem 
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


package com.firstJavaProgram;

public class Main {

    static public int findBestTime(int[] arr )
    {
        int buy=0,sell = 1 ;
        int max_profit = 0,curr_profit = 0;
        for(int i=1;i<arr.length;i+=1)
        {
            if(arr[buy]>arr[sell] && sell<arr.length)
            {
                buy = sell;
            }
            else if(arr[buy]<arr[sell] && sell<arr.length)
            {
                curr_profit = arr[sell]-arr[buy];
                if(curr_profit>max_profit)
                {
                    max_profit = curr_profit;
                }
            }
            sell = sell+1;
        }
        return max_profit;

    }


	



    public static void main(String[] args) {
            int[] data = {9,2,1,4,12,19};
            int x = Main.findBestTime(data);
            System.out.println("Answer is " + x);

    }
}
