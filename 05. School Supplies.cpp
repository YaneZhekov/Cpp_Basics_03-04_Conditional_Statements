#include <iostream>
using namespace std;

int main()
{
	double APens, AMarkers, ACleaning, AProcentDiscount;
	double Pens = 5.80;
	double Markers = 7.20;
	double Cleaning = 1.20;
	double AmountOfMoneyNeeded, AmountWPercent;
	cin >> APens >> AMarkers >> ACleaning >> AProcentDiscount;
	double ProcentDiscount = AProcentDiscount / 100;
	AmountOfMoneyNeeded = (APens * Pens + AMarkers * Markers + ACleaning * Cleaning);
	AmountWPercent = AmountOfMoneyNeeded - (AmountOfMoneyNeeded * ProcentDiscount);
	cout << AmountWPercent;

}
