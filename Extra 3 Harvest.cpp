#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int area, amountOfLitre, workersAmount;
    double amountOfHarvest;
    
    cin >> area >> amountOfHarvest >> amountOfLitre >> workersAmount;

    double totalAmountOfHarvest = (area * 0.4) * amountOfHarvest;
    double totalWine = totalAmountOfHarvest / 2.5;
    double difference = totalWine - amountOfLitre;

    if (difference < 0) {

        cout << "It will be a tough winter! More " << floor(abs(difference)) << " liters wine needed.";
    }
    else if (difference >= 0) {

        double winePerWorker = difference / workersAmount;
        
        cout << "Good harvest this year! Total wine: " << floor(totalWine) << " liters." << endl;
        cout << ceil(difference) << " liters left -> " << ceil(winePerWorker) << " liters per person.";
    }

}

