#include <iostream>
using namespace std;

int main()
{
    double budget;
    int vCards, proc, ram;
    cin >> budget >> vCards >> proc >> ram;
    double priceVCards = vCards * 250;
    double priceProc = (priceVCards * 0.35)*proc;
    double priceRam = (priceVCards * 0.1)*ram;
    double totalSum = priceVCards + priceProc + priceRam;
    if (vCards > proc) {
        totalSum = totalSum - (totalSum * 0.15);
    }
    double difference = budget - totalSum;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (difference < 0) {
        cout << "Not enough money! You need " << abs(difference) << " leva more!" << endl;
    }
    else {
        cout << "You have " << difference << " leva left!" << endl;
    }

}
