#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double hoursNeeded, daysLimit, amountOfWorkersExtra;
    
    cin >> hoursNeeded >> daysLimit >> amountOfWorkersExtra;


    double daysForWork = daysLimit * 0.9;
    double extraWorkHours = amountOfWorkersExtra * daysLimit * 2;
    int totalHours = floor(daysForWork * 8 + extraWorkHours);
    int difference = hoursNeeded - totalHours;

    if (difference <= 0) {
        
        cout << "Yes!" << abs(difference) << " hours left.";
    }
    else if (difference > 0) {
        
        cout << "Not enough time!" << difference << " hours needed.";
    }

}
