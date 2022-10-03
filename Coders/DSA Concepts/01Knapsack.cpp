// 01 Knapsack is a famous problem of the bounded knapsack version of Dynamic programming.
// Here we are given different items with their weights and prices.
// Our objective is to maximize the price of items that we can fit in a sack of capacity w.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, w; // here n stands for the number of items and w stands for the total capacity of the sack
    cin >> n >> w;
    int wt[n], val[n];
    // storting the weights and prices of the items in their respective arrays
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    for (int i = 0; i < n; i++)
        cin >> val[i];
    // creating a 2D dp matrix of dimensions n+1 X w+1
    int dp[n + 1][w + 1];
    // initializing the dp matrix with -1
    memset(dp, -1, sizeof(dp));
    // here we are initializing the values of base cases i.e. if number of items are 0 or the total capacity of the sack is 0
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int j = 0; j <= w; j++)
        dp[0][j] = 0;
    
    // everytime we take an item and check if its weight is smaller than the available space in the sack
    // here there can be two cases : 
    // either there is enough space to accommodate the given item. Here we have 2 options : 
        // either choose the item and decrease the capacity of sack by weight of item and increase the total price by the price of the item
        // or we ignore the item and do not include it in the sack
    // otherwise we have no option but to ignore the given item and move on to the next item.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    // the final answer will be stored in the bottom right of the matrix.
    cout << dp[n][w] << endl;
}