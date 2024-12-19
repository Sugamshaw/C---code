#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int maxProfit(vector<int> &prices, int buy, int max_profit, int index)
{
    if (index >= prices.size())
    {
        return max_profit;
    }
    if (prices[index] < buy)
    {
        buy = prices[index];
    }
    int p = prices[index] - buy;
    if (p > max_profit)
    {
        max_profit = p;
    }
    return maxProfit(prices, buy, max_profit, index + 1);
}
int main()
{
    vector<int> prices = {3, 2, 6, 5, 0, 3};
    cout << "profit : " << maxProfit(prices, INT_MAX, 0, 0);
    return 0;
}