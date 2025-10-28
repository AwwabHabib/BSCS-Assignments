#include <iostream>
using namespace std;
int main ()
{
	int celcius;
	float fah;
	cout << "Enter the temperature in Centigrade: ";
	cin >> celcius;
	fah = (celcius *1.8)+32;
	cout  << celcius << " Degree Centigrade is equal to " << fah << " Fahrenheit" << endl;
	return 0;
}
