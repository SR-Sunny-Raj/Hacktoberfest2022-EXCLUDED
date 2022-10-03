import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            int n = in.nextInt();
            int[][] M = new int[n][n];
            for(int M_i=0; M_i < n; M_i++){
                for(int M_j=0; M_j < n; M_j++){
                    M[M_i][M_j] = in.nextInt();
                }
            }
            int[] rt = new int[n];
            int[] ct = new int[n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    rt[i] += M[i][j];
                    ct[j] += M[i][j];
                }
            }
            Arrays.sort(rt);
            Arrays.sort(ct);
            String ans = "Possible";
            for (int i = 0; i < n; i++) {
                if (rt[i] != ct[i])
                    ans = "Impossible";
            }
            System.out.println(ans);
        }
    }
}
