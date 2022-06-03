#include <iostream>
using namespace std;

int main()
{
    double journeyPrice;
    int puzzles, dolls, bears, minions, trucks;
    cin >> journeyPrice >> puzzles >> dolls >> bears >> minions >> trucks;
    double puzzlePrice = puzzles * 2.60;
    double dollsPrice = dolls * 3;
    double bearsPrice = bears * 4.10;
    double minionsPrice = minions * 8.20;
    double trucksPrice = trucks * 2;
    double allMoney = puzzlePrice + dollsPrice + bearsPrice + minionsPrice + trucksPrice;
    double allToys = puzzles + dolls + bears + minions + trucks;
    double moneyForStore = 0.1 * allMoney;
    double moneyLeft = allMoney - moneyForStore;
    if (allToys >= 50) {
        allMoney = allMoney - (allMoney * 0.25);
    }
    allMoney = allMoney - (allMoney * 0.1);

    cout.setf(ios::fixed);
    cout.precision(2);
    double difference = journeyPrice - allMoney;
    if (difference > 0) {
        cout << "Not enough money! " << difference << " lv needed." << endl;

    }
    else {
        cout << "Yes! " << abs(difference) << " lv left." << endl;
    }


}
