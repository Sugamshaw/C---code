#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int func()
{
}
int main()
{
    unordered_map<string, string> table;

    table["in"] = "India";

    table.insert(make_pair("sd", "adas"));

    pair<string, string> p;
    p.first = "fd";
    p.second = "sfsdf";
    table.insert(p);

    // cout << table.size() << endl;
    // cout << table.empty() << endl;
    // table.clear();
    // cout << table.size() << endl;

    // cout << table["in"] << endl;
    // table["in"] = "India1";
    // cout << table["in"] << endl;
    // table.at("in") = "India2";
    // cout << table["in"] << endl;

    // unordered_map<string, string>::iterator it = table.begin();

    // while (it != table.end())
    // {
    //     pair<string, string> p = *it;
    //     cout << p.first << " " << p.second << endl;

    //     it++;
    // }

    // if (table.find("in") != table.end())
    // {
    //     cout << "found" << endl;
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }
    // if (table.count("j"))
    // {
    //     cout << "found " << endl;
    // }
    // else
    // {
    //     cout << " n found" << endl;
    // }

    cout << table.count("in") << endl;

    return 0;
}