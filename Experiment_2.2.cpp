#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	int gallons;
	cout << "Enter Gallons Consumed: "; cin >> gallons;

	float WaterDemandCharge = 35, ConsumptionCharge = 1.10, TotalCharge = WaterDemandCharge + (ConsumptionCharge * gallons), TotalLateCharge = TOTALCHARGE + 20, AmountPaid;
	
	cout << "TOTAL CHARGE: " << TOTAL CHARGE << endl;
	cout << "Enter Amount of Payment: "; cin >> AmountPaid;

	if (AmountPaid < TOTALCHARGE)
	{
		cout << "YOUR WATER BILL COST : " << TotalLateCharge << ", including an additional late charge fee of P20." "\n" "PLEASE PAY THE CORRECT AMOUNT: "; cin >> AmountPaid;
		
		if (AmountPaid < TotalLateCharge)
		{
			cout << "INVALID. PLEASE PAY ENOUGH AMOUNT." << endl;
		}
		else
		{
			cout << "PAYMENT ACCEPTED. YOU HAVE A TOTAL OF" << AmountPaid - TotalLateCharge << "." << endl;
		}
	}
	else
	{
		cout << "PPAYMENT ACCEPTED. YOUR WATER BILL COSTS " << TotalCharge << " with a total change of " << AmountPaid - TotalCharge << "." << endl;
	}

	cout << "Thank You!";

	getch();
	return 0;
}
