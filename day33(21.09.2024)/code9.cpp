#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int min_price=INT_MAX;
    int max_profit=INT_MIN;
    for (int i = 0; i < prices.size(); i++)
    {
        if(prices[i]<min_price)
        {
            min_price=prices[i];
        }
        int p=prices[i]-min_price;
        if(p>max_profit)
        {
            max_profit=p;
        }
    }
    return max_profit;
}
int main()
{
    vector<int> prices = {3, 2, 6, 5, 0, 3};
    cout << "profit : " << maxProfit(prices);
    return 0;
}