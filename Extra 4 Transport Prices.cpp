#include <iostream>
using namespace std;

int main()
{
	int kmAmount;
	string dayOrNight;

	cin >> kmAmount >> dayOrNight;
	
	double taxi[2] = { 0.79, 0.90 };

	cout.setf(ios::fixed);
	cout.precision(2);

	if (kmAmount < 20) {
		if (dayOrNight == "day") {
			double taxiPrice = 0.7 + taxi[0] * kmAmount;
			
			cout << taxiPrice;
		}
		else if (dayOrNight == "night") {
			double taxiPrice = 0.7 + taxi[1] * kmAmount;
			
			cout << taxiPrice;
		}
	}
	else if (kmAmount < 100) {
		double busPrice = kmAmount * 0.09;
		
		cout << busPrice;
	}
	else if (kmAmount >= 100) {
		double trainprice = kmAmount * 0.06;
		
		cout << trainprice;
	}
}
