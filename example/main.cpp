#include <iostream>
#include "calculator.hpp"

using namespace std;

int main()
{
	float a;
	float b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "a + b = " << sum(a, b) << endl;

	cout << "a - b = " << sub(a, b) << endl;

	double *res = div(a, b);
	if (res)
		cout << "a / b = " << *div(a, b) << endl;
	else
		cout << "a/0 -> error" << endl;
	delete res;

	cout << "a * b = " << mult(a, b) << endl;

	double *r = square(a);
	if (r) cout << "a^1/2=" << *square(a) << endl;
	else cout << "a < 0 -> error" << endl;
	delete r;

	double *d = squar(b);
	if (d) cout << "b^1/2=" << *squar(b) << endl;
	else cout << "b < 0 -> error" << endl;
	delete d;

	cout << "a^b = " << pow(a, b) << endl;
	system("pause");
	return 0;
}
