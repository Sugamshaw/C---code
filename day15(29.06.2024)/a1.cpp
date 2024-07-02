#include <iostream>
#include <cmath>

using namespace std;

double result(double number, double precision)
{
    if (number < 0)
    {
        cerr << "Error: Negative input for square root calculation." << endl;
        return -1; // Return an error code for negative input
    }

    double s = 0.0, e = number, ans = 0.0;
    while (s<=e)
    {
        double mid = s + (e - s) / 2.0;
        double p = mid * mid;
        if (p <= number)
        {
            ans = mid;
            s = mid+precision;
        }
        else
        {
            e = mid-precision;
        }
        cout << mid << endl;
    }

    return ans; 
}

int main()
{
    double value = 100.0;
    double precision = 0.0001; // Increased precision for more accurate results

    double sqrt_value = result(value, precision);
    if (sqrt_value != -1)
    {
        cout << "Square root of " << value << " with precision " << precision << " is " << sqrt_value << endl;
    }

    return 0;
}
