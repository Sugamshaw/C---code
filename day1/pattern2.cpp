#include <iostream>
using namespace std;
void halfPyramid(int row, int col)
{
    cout << "Half Pyramid\n"
         << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void hollowhalfPyramid(int side)
{
    cout << "Hollow Half Pyramid\n"
         << endl;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == side - 1 || i == j)
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
void invertedhalfPyramid(int row, int col)
{
    cout << "Inverted Half Pyramid\n"
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void hollowinvertedhalfPyramid(int side)
{
    cout << "Hollow Inverted Half Pyramid\n"
         << endl;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side - i; j++)
        {
            if (i == 0 || ((i + j) == side - 1) || j == 0)
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
void numerichalfPyramid(int row)
{
    cout << "Numeric Half Pyramid\n"
         << endl;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void invertednumerichalfPyramid(int row)
{
    cout << "Inverted Numeric Half Pyramid\n"
         << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <row-i; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    halfPyramid(5, 5);
    cout << endl;
    cout << endl;
    invertedhalfPyramid(5, 5);
    cout << endl;
    cout << endl;
    hollowhalfPyramid(10);
    cout << endl;
    cout << endl;
    hollowinvertedhalfPyramid(8);
    cout << endl;
    cout << endl;
    numerichalfPyramid(8);
    cout << endl;
    cout << endl;
    invertednumerichalfPyramid(8);

    return 0;
}