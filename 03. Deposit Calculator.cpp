#include <iostream>
using namespace std;

int main()
{
    double MoneyAmount, YearPercent, SumAmount, ActualPercent;
    int Months;
    cin >> MoneyAmount >> Months >> YearPercent;
    ActualPercent = YearPercent / 100;
    SumAmount = MoneyAmount + Months * ((MoneyAmount * ActualPercent) / 12);
    cout << SumAmount;

}
