#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};

int main() {
    Solution solution;

    // Example 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << solution.maxProfit(prices1) << endl;

    return 0;
}
