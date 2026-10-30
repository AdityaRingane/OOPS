
#include <iostream>
#include <string>
using namespace std;

class MyString
{
    string str;

public:
    MyString()
    {
        str = "";
    }

    MyString(string s)
    {
        str = s;
    }

    void accept()
    {
        cout << "Enter a string: ";
        cin >> str;
    }

    void display()
    {
        cout << "String is: " << str << endl;
    }

    ~MyString()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    MyString s1;

    s1.accept();
    s1.display();

    MyString s2("Hello");
    s2.display();

    return 0;
}
