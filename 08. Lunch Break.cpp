#include <iostream>
#include <string> 
#include <math.h>
using namespace std;

int main()
{

	string seriesName;
	int episodeLenght, breakTime;
	getline(cin, seriesName);
	cin >> episodeLenght >> breakTime;
	double lunchTime = breakTime * 0.125;
	double breathTime = breakTime * 0.25;
	double totalTime = breakTime - (lunchTime + breathTime);
	if (totalTime >= episodeLenght) {
		double extraMinutes = ceil(totalTime - episodeLenght);
		cout << "You have enough time to watch " << seriesName << " and left with " << extraMinutes << " minutes free time." << endl;
	}
	else {
		double neededMinutes = ceil(episodeLenght - totalTime);
		cout << "You don't have enough time to watch " << seriesName << ", you need " << neededMinutes << " more minutes." << endl;
	}

}
