
#include <iostream>
using namespace std;

class shape
{
public:
    virtual void draw()
    {
        cout << "In drawing shape" << endl;
    }
};

class circle : public shape
{
public:
    void draw() override
    {
        cout << "In drawing circle" << endl;
    }
};

int main()
{
    circle c1;
    shape s1;

    shape* str = &c1;

    str->draw();
    s1.draw();
    c1.draw();

    return 0;
}
