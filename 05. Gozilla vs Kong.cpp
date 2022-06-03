#include <iostream>
using namespace std;

int main()
{
    // decor is 10% off the budget
    // When more than 150 statists, discount for clothing at 10%
    // 1. Budget for movie
    // 2. Amount of statists
    // 3. Price for clothes per statis
    double budget, clothingPrice;
    int statists;

    cin >> budget >> statists >> clothingPrice;
    cout.setf(ios::fixed);
    cout.precision(2);
    double decor = budget * 0.1;
    double totalClothingPrice = clothingPrice * statists;
    if (statists > 150) {
        totalClothingPrice = totalClothingPrice - (totalClothingPrice * 0.1);
    }
    double totalPrice = decor + totalClothingPrice;
    double difference = budget - totalPrice;
    if (difference >= 0) {
        cout << "Action!" << endl << "Wingard starts filming with " << abs(difference) << " leva left." << endl;

    }
    else {
        cout << "Not enough money!" << endl << "Wingard needs " << abs(difference) << " leva more." << endl;
    }
}

