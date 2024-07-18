class Solution {
public:
    long long maxProfit(std::vector<int>& prices) {
        long long n = prices.size();
        if (n == 0) return 0;
        
        long long max_val = 0;
        long long minimum = prices[0];
        
        for (long long i = 1; i < n; ++i) {
            long long profit = prices[i] - minimum;
            max_val = std::max(profit, max_val);
            minimum = std::min(minimum, static_cast<long long>(prices[i]));
        }
        
        return max_val;
    }
};
