#include <iostream>
using namespace std;

int main()
{
	double Lenght, Width, Height; // in cm
	double Procent;
	cin >> Lenght >> Width >> Height >> Procent;
	cout.setf(ios::fixed);
	cout.precision(2);
	double ProcentV = Procent / 100;
	double CubicCm = Lenght * Width * Height; // cm3
	double CubicDm = CubicCm * 0.001; // dm3
	double SpaceTaken = CubicDm * ProcentV;
	double TotalSpaceForWater = CubicDm - SpaceTaken;
	cout << TotalSpaceForWater;
}
