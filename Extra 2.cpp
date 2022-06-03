#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int normalTimePlayedPerYear = 30000; // in minutes
    int restDays;
    
    cin >> restDays;
    
    int workDays = 365 - restDays;
    int playAmountOnWorkDays = workDays * 63;
    int playAmountOnRestDays = restDays * 127;
    int totalPlayTime = playAmountOnRestDays + playAmountOnWorkDays;
    
    double difference = normalTimePlayedPerYear - totalPlayTime;
    
    if (difference < 0) {

        double hours = abs(difference) / 60;
        double minutes = (hours - floor(abs(difference) / 60)) * 60;
        
        cout << "Tom will run away" << endl << floor(hours) << " hours and " << minutes << " minutes more for play";
    }
    else if (difference > 0) {

        double hours = difference / 60;
        double minutes = (hours - floor(difference / 60)) * 60;

        cout << "Tom sleeps well" << endl << floor(hours) << " hours and " << minutes << " minutes less for play";
    }
    
}

