//0 ms runtime beats 100%

#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(const std::vector<int>& prices) {
        if (prices.empty()) return 0;

        int min_price = prices[0];
        int max_profit = 0;
        const size_t s = prices.size();
        for (size_t i = 1; i < s; i++) {
            max_profit = max(max_profit, prices[i] - min_price);
            min_price = min(min_price, prices[i]);
        }

        return max_profit;
    }
};
