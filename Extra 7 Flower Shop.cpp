#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int amountMag, amountZum, amountRoses, amountCactuses;
    double giftPrice;

    cin >> amountMag >> amountZum >> amountRoses >> amountCactuses >> giftPrice;

    double totalMoney = amountMag * 3.25 + amountZum * 4 + amountRoses * 3.50 + amountCactuses * 8;
    double moneyLeft = totalMoney * 0.95;

    double difference = moneyLeft - giftPrice;

    if (difference < 0) {
        
        cout << "She will have to borrow " << ceil(abs(difference)) << " leva.";
    }
    else if (difference >= 0) {

        cout << "She is left with " << floor(difference) << " leva.";
    }

}

