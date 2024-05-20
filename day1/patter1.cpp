#include <iostream>
using namespace std;
void rectanglesolid(int row, int col)
{
    cout << "REctangle solid\n"
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void squaresolid(int side)
{
    cout << "Square solid\n"
         << endl;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void rectanglehollow(int row, int col)
{
    cout << "Rectangle hollow\n"
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void squarehollow(int side)
{
    cout << "Square hollow\n"
         << endl;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    squaresolid(5);
    cout << endl;
    cout << endl;
    rectanglesolid(4, 6);
    cout << endl;
    cout << endl;
    squarehollow(5);
    cout << endl;
    cout << endl;
    rectanglehollow(4, 6);

    return 0;
}