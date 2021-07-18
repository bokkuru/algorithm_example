#include <vector>
#include <iostream>
#include "FloydWarshall.cpp"


int main(){
    std::vector<std::vector<int>> dp;
    std::cout << "start"<< std::endl;
    dp.push_back({0,2,3});
    dp.push_back({1,0,1 << 16});
    dp.push_back({2,1<<16,0});
    FloydWarshall(dp);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cout << dp[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "end"<< std::endl;
    return 0;
}