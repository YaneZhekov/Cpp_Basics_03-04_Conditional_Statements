#include <iostream>
using namespace std;

int main()
{
    double Plastic = 1.50; // per m
    double Paint = 14.50; // per liter
    double PaintDes = 5.00; // per liter
    int APlastic, APaint, APaintDes, WorkingHours;
    cin >> APlastic >> APaint >> APaintDes >> WorkingHours;
    double Bags = 0.40;
    double PlasticPrice = (Plastic * APlastic) + (2 * Plastic);
    double PaintPrice = (APaint + (APaint * 0.1)) * Paint;
    double PaintDesPrice = PaintDes * APaintDes;
    double TotalPriceForMaterials = PlasticPrice + PaintPrice + PaintDesPrice +Bags;
    double WorkingHour = TotalPriceForMaterials * 0.3;
    double WorkingHoursPrice = WorkingHour * WorkingHours;
    double finalPrice = TotalPriceForMaterials + WorkingHoursPrice;
    cout << finalPrice << endl;
}
