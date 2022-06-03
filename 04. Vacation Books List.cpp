#include <iostream>
using namespace std;

int main()
{
    int PageAmount, AmountOfPageRead, DaysAmount, PagesReadperHour, HourPerDay;
    cin >> PageAmount >> AmountOfPageRead >> DaysAmount;
    PagesReadperHour = PageAmount / AmountOfPageRead;
    HourPerDay = PagesReadperHour / DaysAmount;
    cout << HourPerDay;
}
