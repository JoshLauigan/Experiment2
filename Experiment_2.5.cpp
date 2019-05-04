#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n1 = 0, 
        int n2 = 1, 
        int n3, 
        int n4 = 2, 
        int n5 = 2 + 20;

	cout << "FIBONACCI NUMBERS:\n";
	cout << n1 << "," << n2 << ",";

	for (n4; n4 < n5; n4++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		cout << n3 << ",";
	}

	cout << "\b";
	cout << " ";

	
        getch();
	return 0;
}
