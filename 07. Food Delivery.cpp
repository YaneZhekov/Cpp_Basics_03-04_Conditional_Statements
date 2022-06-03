#include <iostream>
using namespace std;

int main()
{
    double ChickenP = 10.35;
    double FishP = 12.40;
    double VeganP = 8.15;
    double DeliverP = 2.50;
    int AChicken, AFish, AVegan;
    cin >> AChicken >> AFish >> AVegan;
    double DesertP = ((AChicken * ChickenP) + (AFish * FishP) + (AVegan * VeganP)) * 0.2;
    double FinalPrice = ChickenP * AChicken + FishP * AFish + AVegan * VeganP + DesertP + DeliverP;
    cout << FinalPrice;
}