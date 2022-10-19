/*

Question - Subset Sum

You are given a set of N integers. You have to return true if there exists a subset that sum up to K, otherwise return false.

Input Format
The first line of the test case contains an integer 'N' representing the total elements in the set.
The second line of the input contains N integers separated by a single space.    
The third line of the input contains a single integer, denoting the value of K.

Output Format
Output Yes if there exists a subset whose sum is k, else output No.

Constraints :
1 <= N <= 10^3
1 <= a[i] <= 10^3, where a[i] denotes an element of the set 
1 <= K <= 10^3

Time Limit: 1 sec

Sample Input 1 :
4
4 3 5 2
13

Sample Output 1 :
No

Sample Input 2 :
5
4 2 5 6 7
14

Sample Output 2 :
Yes

Main Code :

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Runner {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
    public static void main(String[] args) throws NumberFormatException, IOException {
        int size = Integer.parseInt(br.readLine().trim());
        int[] input = new int[size];

        if (size == 0) {
            System.out.print("No");
            return;
        }
        
		String[] strNums;
		strNums = br.readLine().split("\\s");
		
        for (int i = 0; i < size; ++i) {
            input[i] = Integer.parseInt(strNums[i]);
        }

        int sum = Integer.parseInt(br.readLine().trim());
        if (Solution.isSubsetPresent(input,size,sum)){
            System.out.print("Yes");
        }
        else{
            System.out.print("No");
        }


    }
}

*/

public class Solution{
    static boolean res = false;
    static boolean isSubsetPresent(int[] arr, int n, int sum) {
		backtrack(0, n, 0, sum, arr);
        return res;
    }
    
    public static void backtrack(int idx, int n, int curr, int sum, int[] arr) {
        if(res)
            return;
        if(curr > sum)
            return;
        if(curr == sum) {
            res = true;
			return;
        }
        for(int i = idx; i < n; i++) {
            curr += arr[i];
            backtrack(i + 1, n, curr, sum, arr);
            curr -= arr[i];
        }
    }
}
