
#include <iostream>
using namespace std;

namespace s1
{
    void disp()
    {
        cout << "Inside namespace s1" << endl;
    }
}

namespace s2
{
    int x = 100;

    int disp()
    {
        return 10 & x;
    }
}

int main()
{
    s1::disp();

    cout << "Value of x: " << s2::x << endl;
    cout << "Result: " << s2::disp() << endl;

    return 0;
}
