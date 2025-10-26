#include <iostream>
using namespace std;
int main ()
{
	int x;
	int y;
	cout << "Enter Value 1: " ;
	cin >> x;
	cout << "Enter Value 2: ";
	cin >> y;
	cout << "Sum = " << x + y << endl;
	cout << "Difference = " << x - y << endl;
	cout << "Product = " << x * y << endl;
	cout << "Quotient = " << x/y << endl;
	cout << "Remainder = " << x%y << endl;
	return 0;
}
