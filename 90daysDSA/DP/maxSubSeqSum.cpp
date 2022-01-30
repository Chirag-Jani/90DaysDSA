#include <bits/stdc++.h>
using namespace std;

// MEMOIZATION
int f(int ind, vector<int> &nums, vector<int> &dp)
{
    if (ind == 0)
        return nums[ind];
    if (ind < 0)
        return 0;

    if (dp[ind] != -1)
        return dp[ind];

    int pick = f(ind - 2, nums, dp);
    int nonPick = f(n - 1, nums, dp);

    return dp[ind] = max(pick, nonPick);
}

int maximumNonAdjSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n, -1);

    return f(n - 1, nums, dp);
}

//  SPACE OPTIMIZATION
int maximumNonAdjSumSPACEOPTIMIZATION(vector<int> &nums)
{
    int n = nums.size();
    int prev = nums[0];
    int prev2 = 0;

    for (int i = 0; i < n; i++)
    {
        int take = nums[i];
        if (i > 1)
            take += prev2;
        int nonTake = 0 + prev;

        int curi = max(take, nonTake);
        prev2 = prev;
        prev = curi;
    }
    return prev;
}

int main()
{
    return 0;
}