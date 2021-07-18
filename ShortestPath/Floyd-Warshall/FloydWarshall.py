def FloydWarshall(dp):
    n = len(dp)
    for k in range(n):
        for i in range(n):
            for j in range(n):
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j])
    return dp
