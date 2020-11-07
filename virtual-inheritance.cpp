#include <iostream>
using namespace std;

class Base
{
	int a;
	public:
		Base()
		{
			a = 10;
		}
		void show()
		{
            cout << a << endl;
			cout << "In show" << endl;
		}
};
class D1 : public  virtual Base
{
};
class D2 : public  virtual Base
{
};
class D11 : public D1, public D2
{
};

int main()
{
<<<<<<< HEAD
    cout << "In main" << endl;
=======
    cout << "New statement" << endl;
>>>>>>> main
	D11 d;
	//cout << d.a << endl;
	d.show();
	return 0;
}
