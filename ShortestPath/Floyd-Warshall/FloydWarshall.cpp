#include <vector>

void FloydWarshall(std::vector<std::vector<int>> &dp){
    int n = dp.size();
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                dp[i][j] = std::min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    return;
}