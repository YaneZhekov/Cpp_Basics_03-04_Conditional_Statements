#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int V, P1, P2;
	double H;
	cin >> V >> P1 >> P2 >> H;
	cout.setf(ios::fixed);
	cout.precision(2);
	double PercentageFull = (P1 * H + P2 * H) / V * 100;
	double PipeTotal = P1 * H + P2 * H;
	double Pipe1 = (P1 * H) / PipeTotal * 100;
	double Pipe2 = (P2 * H) / PipeTotal * 100;
	double Overflow = abs(V - (P1 * H + P2 * H));
	if (PercentageFull <= 100) {
		cout << "The pool is " << PercentageFull << "% full. Pipe 1: " << Pipe1 << "%. Pipe 2: " << Pipe2 << "%.";
	}
	else if (PercentageFull >= 100) {
		cout << "For " << H << " hours the pool overflows with " << Overflow << " liters.";
	}

}
