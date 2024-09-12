#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
bool checkTwoChessboards(string coordinate1, string coordinate2)
{
    int value1 = (int(coordinate1[0]) - 'a' + 1) + coordinate1[1];
    int evenorodd1 = value1 % 2 == 0 ? 0 : 1;
    int value2 = (int(coordinate2[0]) - 'a' + 1) + coordinate2[1];
    int evenorodd2 = value2 % 2 == 0 ? 0 : 1;
    return evenorodd1 == evenorodd2;
}
int main()
{
    cout << checkTwoChessboards("a1", "h3");
    return 0;
}