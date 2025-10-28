#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char c;
	cout << "Enter a character and I will tell you it's ASCII value : \n";
	c = getch();
	cout << "ASCII Value of " << c << " is " << int (c);
	
	cout << "\nEnter a character and I will tell you it's ASCII value : \n";
	c = getche();
	cout << " ASCII Value of " << c << " is " << int (c);
	
	cout << "\nEnter a character and I will tell you it's ASCII value : ";
	c = getchar();
	cout << "ASCII Value of " << c << " is " << int (c);
	return 0;
}
