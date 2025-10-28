#include <iostream>
using namespace std;
int main ()
{
	int a;
	int b;
	cout << "Enter integer value A: ";
	cin >> a;
	cout << "Enter intger value B: ";
	cin >> b;
	cout << "(a - b)^2 = " << a*a - 2*a*b + b*b << endl;
	return 0;	
}
