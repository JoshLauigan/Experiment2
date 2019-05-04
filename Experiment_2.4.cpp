#include <conio.h>
#include <iostream>
#incLude <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cout << " COUNTING ... \n";

	for (x = 1; x < 10; x++)
	{
		cout << x << ",";
	}
	for (x = 10; x >= 10, x <= 30; x += 2)
	{
		cout << x << ",";
	}

	cout << " ";

	getch();
	return 0;
}
