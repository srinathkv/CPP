#include <iostream>

using namespace std;

class Foo
{
    mutable int a;
    public:
    Foo(int x):a(x){}

    void fun() const
    {
        cout << "Before " << a << endl;
        a=100;
        cout << "After " << a << endl;
    }

};
int main()
{
    Foo f1(10);

    f1.fun();
    return 0;
}
