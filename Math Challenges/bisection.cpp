#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double epsilon = 0.00001, e = 2.718281828;
    double a, b, m, y_m, y_a, y_b, n = 1;
    a = 0; b = 1;


    while ((b - a) > epsilon)
    {
        m = (a + b) / 2;
        y_m = pow(e, m) - pow(m, 2) - (3 * m) - 2;
        y_a = pow(e, a) - pow(a, 2) - (3 * a) - 2;
        y_b = pow(e, b) - pow(b, 2) - (3 * b) - 2;
//        y_m = sqrt(m) - cos(m);
//        y_a = sqrt(a) - cos(a);
//        y_b = sqrt(b) - cos(b);                                                             //mid point
//        y_m = pow(b, 4) - (2 * pow(b, 3)) - (4 * pow(b, 2)) + (4 * b) + 4;                                                                 //y_m = f(m)
//        y_a = pow(b, 4) - (2 * pow(b, 3)) - (4 * pow(b, 2)) + (4 * b) + 4;                                                                //y_a = f(a)
//        y_b = pow(b, 4) - (2 * pow(b, 3)) - (4 * pow(b, 2)) + (4 * b) + 4;                                                                 //y_b = f(b)
//        y_m = pow(e, m) - pow(m, 2) + (3 * m) - 2;
//        y_a = pow(e, a) - pow(a, 2) + (3 * a) - 2;
//        y_b = pow(e, b) - pow(b, 2) + (3 * b) - 2;
//        y_m = m - pow(2, -m);
//        y_a = a - pow(2, -a);
//        y_b = b - pow(2, -b);
//        y_m = (m * m * m * m) - (2 * (m * m * m)) - (4 * (m * m)) + (4 * m) + 4;
//        y_a = (a * a * a * a) - (2 * (a * a * a)) - (4 * (a * a)) + (4 * a) + 4;
//        y_b = (b * b * b * b) - (2 * (b * b * b)) - (4 * (b * b)) + (4 * b) + 4;
        cout << n << ". \na = " << a << "\nb = " << b << "\nf(a) = " << y_a << "\nf(b) = " << y_b << "\nP(n) = " << m << endl;
        if ((y_m > 0 && y_a < 0) || (y_m < 0 && y_a > 0))
        {
            b = m;
        }                                                                   //f(a) and f(m) have different signs: move b
        else{
            a = m;
            }                                                                         //f(a) and f(m) have same signs: move a
        cout << "New interval: [" << a << " .. " << b << "] = " << y_m << endl << endl;
        n++;                                                                             //Print progress
    }
    cout << "Approximate solution = " << (a + b) / 2 << endl;
    return 0;
}


