#include <iostream>
using namespace std;

int main()
{
	double Value;
	cin >> Value;
	double finalValue = Value * 1.79549;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << finalValue;
}
