#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int days, foodLeft;
    double dogFood, catfood, turtleFood;

    cin >> days >> foodLeft >> dogFood >> catfood >> turtleFood;

    double foodPerDayDog = days * dogFood;
    double foodPerDayCat = days * catfood;
    double foodPerDayTurtle = (days * turtleFood)/1000;
    double totalFoodNeeded = foodPerDayCat + foodPerDayDog + foodPerDayTurtle;

    double difference = totalFoodNeeded - foodLeft;

    if (difference > 0) {
        
        cout << ceil(difference) << " more kilos of food are needed.";
    }
    else if (difference <= 0) {
        
        cout << floor(abs(difference)) << " kilos of food left.";
    }
}
