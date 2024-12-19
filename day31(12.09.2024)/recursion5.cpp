#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int solvecoin(vector<int> coins, int amount)
{
    if (amount == 0)
    {
        return 0;
    }
    int mincoins = INT_MAX;
    for (int i = 0; i < coins.size(); i++)
    {
        int coin = coins[i];

        if (amount >= coin)
        {
            int subproblem = solvecoin(coins, amount - coin);
            if (subproblem != INT_MAX)
            {
                int coinused = 1 + subproblem;
                mincoins = min(coinused, mincoins);
            }
        }
    }
    cout<<mincoins<<endl;
    return mincoins;
}

int main()
{
    vector<int> v = {2, 5, 1};
    int amount = 100;
    cout << solvecoin(v, amount) << endl;
    return 0;
}