#include <iostream>
#include <vector>
#include <string>
using namespace std;
int garbageCollection(vector<string> &garbage, vector<int> &travel)
{

    int totaltime = 0;
    int metalpos = 0, paperpos = 0, glasspos = 0;

    for (int i = 0; i < garbage.size(); i++)
    {
        int metaltime = 0, papertime = 0, glasstime = 0;
        string value = garbage[i];
        for (int j = 0; j < value.length(); j++)
        {
            // cout << value[j] << endl;
            if (value[j] == 'M')
            {
                metaltime += 1;
                metalpos = i;
            }
            if (value[j] == 'P')
            {
                papertime += 1;
                paperpos = i;
            }
            if (value[j] == 'G')
            {
                glasstime += 1;
                glasspos = i;
            }
        }
        cout << "value: " << value << endl;
        cout << "metaltime: " << metaltime << endl;
        cout << "papertime: " << papertime << endl;
        cout << "glasstime: " << glasstime << endl;
        totaltime = totaltime + metaltime + papertime + glasstime;
        cout << "totaltime: " << totaltime << endl;
    }
    cout << totaltime << endl;
    for (int i = 1; i <= metalpos; i++)
    {
        totaltime += travel[i - 1];
    }
    for (int i = 1; i <= paperpos; i++)
    {
        totaltime += travel[i - 1];
    }
    for (int i = 1; i <= glasspos; i++)
    {
        totaltime += travel[i - 1];
    }

    return totaltime;
}
int main()
{
    vector<string> str = {"G", "P", "GP", "GG"};
    vector<int> time = {2, 4, 3};

    cout << garbageCollection(str, time) << endl;

    return 0;
}