// This problem is type of unbounded knapsack problem in Dynamic programming
// In this problem, our goal is to output the minimum number of coins required to make a specific sum out of the given coins or tell whether it is not possible to form a combination for the same.

#include <bits/stdc++.h>

using namespace std;

int dp[105][1000005];
const int m = INT_MAX - 1;

// here m represents that it requires infinite number of coins to form that combination, or in other words, it is not possible to form that sum using any combination of the given coins.
int minCoins(int coin[], int n, int sum) {
    for(int j = 0; j <= sum; j++) dp[0][j] = m;
    for(int i = 0; i <= n; i++) dp[i][0] = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {
            // at every step there are 2 possibilities 
            // either the given coin has a value greater than the required sum 
            // or its value is less than the required sum, and in that case, we have 2 options : 
                // either choose the coin and decrease the required sum by the value of the coin
                // or ignore that coin completely and move on
            if(coin[i-1] <= j) dp[i][j] = min(1 + dp[i][j - coin[i-1]], dp[i-1][j]);
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}

int main() {
    int n, sum; // n represents the number of distinct coins and sum represents the total sum required to be formed
    cin>>n>>sum;
    int coin[n];
    for(int i = 0; i < n; i++) cin>>coin[i];
    int ans = minCoins(coin, n, sum);
    if(ans == m) cout<<"-1\n";
    else cout<<ans<<endl;
    // a major difference between this and bounded knapsack is that in bounded knapsack, once we choose an item, we never come back to it.
    // but in unbounded knapsack, even after we choose an item, there is a possibility that we can choose it again.
    // but if we reject an item once, we will never come back to it again.
}