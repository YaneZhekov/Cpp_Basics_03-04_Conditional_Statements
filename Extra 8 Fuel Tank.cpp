#include <iostream>
using namespace std;

int main()
{
    string gas;
    int fuelAmount;

    cin >> gas >> fuelAmount;

    if (gas == "Diesel" || gas == "Gasoline" || gas == "Gas") {
        
        if (fuelAmount >= 25 && gas == "Diesel") {
            
            cout << "You have enough diesel.";
        }
        else if (fuelAmount >= 25 && gas == "Gasoline") {
            
            cout << "You have enough gasoline.";
        }
        else if (fuelAmount >= 25 && gas == "Gas") {

            cout << "You have enough gas.";
        }
        else if (fuelAmount < 25 && gas == "Diesel") {

            cout << "Fill your tank with diesel!";
        }
        else if (fuelAmount < 25 && gas == "Gasoline") {
            
            cout << "Fill your tank with gasoline!";
        }
        else if (fuelAmount < 25 && gas == "Gas") {

            cout << "Fill your tank with gas!";
        }
    }
    else if (gas!= "Diesel" || "Gasoline" || "Gas") {
        
        cout << "Invalid fuel!";
    }

}
