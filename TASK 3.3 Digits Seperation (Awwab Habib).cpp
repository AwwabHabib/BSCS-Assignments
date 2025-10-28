#include <iostream>
using namespace std;
int main ()
{
	int n,h,t,o;
	cout << "Enter a three digit number: ";
	cin >> n;
	o =  n%10;
	t = (n/10)%10;
	h = (n/100) %10;
	cout << "There are " << h << " Hundred " << t << " Tens and " << o << " Ones in " << n;
	return 0;
}
