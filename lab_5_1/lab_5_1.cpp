#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y);   // прототип функції k(x, y)

int main()
{
    double p, q;

    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    // знаменник дробу: 1 + k(pq + q^2, p)
    double d = 1 + k(p * q + q * q, p);
    if (abs(d) < 1e-12)
    {
        cout << "Error: division by zero" << endl;
        return 1;
    }

    // чисельник: k(1 + pq, q^2) + k^2(p, p^2)
    double c = (k(1 + p * q, q * q) + pow(k(p, p * p), 2)) / d;

    cout << "c = " << c << endl;

    return 0;
}

// k(x, y) = x / (1 + sin^2(y)) + y / (1 + x^2)
double k(const double x, const double y)   // визначення функції
{
    return x / (1 + pow(sin(y), 2)) + y / (1 + x * x);
}
