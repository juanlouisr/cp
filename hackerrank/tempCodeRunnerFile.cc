
int heightHelper(int n, vector<int>& predators, unordered_map<int, int>& dp)
{
    if (predators[n] == -1)
    {
        dp[n] = 1;
        return 1;
    }
    if (dp.find(n) != dp.end())
    {
        return dp[n];
    }
    dp[n] = 1 + heightHelper(predators[n], predators, dp);
    return dp[n];
}

int minimumGroups(vector<int> predators) {
    int maxHeight = 1, height;
    unordered_map<int, int> dp;

    for (size_t i = 0; i < predators.size(); i++)
    {
        height = heightHelper(i, predators, dp);
        maxHeight = max(maxHeight, height);
    }
    return maxHeight;
}
