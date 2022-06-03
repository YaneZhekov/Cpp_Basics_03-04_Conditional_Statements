#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	double record, distance, timePerMeter;
	cin >> record >> distance >> timePerMeter;
	cout.setf(ios::fixed);
	cout.precision(2);
	double timeNeeded = distance * timePerMeter;
	double timeWasted = floor(distance / 15) * 12.5;
	double totalTime = timeNeeded + timeWasted;
	double difference = record - totalTime; 
	if (difference > 0) { 
		cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;

	}
	else {
		cout << "No, he failed! He was " << abs(difference) << " seconds slower." << endl;
	}
}
