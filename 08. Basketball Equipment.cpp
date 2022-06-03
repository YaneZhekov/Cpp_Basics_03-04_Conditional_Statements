#include <iostream>
using namespace std;

int main()
{
    int PDays;
    cin >> PDays;
    double BasketShoes = (double)PDays - (PDays * 0.4);
    double BasketTeam = BasketShoes - (BasketShoes * 0.2);
    double BasketBall = BasketTeam * 0.25;
    double BasketAcc = BasketBall * 0.2;
    double TotalPrice = BasketShoes + BasketTeam + BasketBall + BasketAcc + PDays;
    cout << TotalPrice;

}
