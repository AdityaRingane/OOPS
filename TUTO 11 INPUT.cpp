
#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    T add()
    {
        return a + b;
    }
};

template <class T>
T multiply(T a, T b)
{
    return a * b;
}

int main()
{
    Calculator<int> c1(5, 4);
    Calculator<double> c2(5.2, 4.2);

    cout << "Integer addition: " << c1.add() << endl;
    cout << "Double addition: " << c2.add() << endl;

    cout << "Integer multiplication: " << multiply(5, 4) << endl;
    cout << "Double multiplication: " << multiply(5.2, 4.2) << endl;

    return 0;
}
