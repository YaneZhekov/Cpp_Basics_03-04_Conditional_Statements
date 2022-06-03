#include <iostream>
using namespace std;

int main()
{
    string gasType, yesno;
    double gasAmount;
    
    cin >> gasType >> gasAmount >> yesno;
    
    cout.setf(ios::fixed);
    cout.precision(2);

    if (gasType == "Gas") {
        if (yesno == "Yes") {
            
            double discountGas = gasAmount * 0.08;
            double basePrice = 0.93 * gasAmount;
            
            if (gasAmount < 20) {
                
                double priceAmount = basePrice - discountGas;
                
                cout << priceAmount << " lv.";
            }
            else if (gasAmount >= 20 && gasAmount <= 25) {
                
                double priceAmount = (basePrice - discountGas) * 0.92;
                
                cout << priceAmount << " lv.";
            }
            else if (gasAmount > 25) {
                
                double priceAmount = (basePrice - discountGas) * 0.90;
                
                cout << priceAmount << " lv.";
            }
        }
        else if (yesno == "No") {

            double basePrice = 0.93 * gasAmount;

            if (gasAmount < 20) {
                
                double priceAmount = basePrice;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount >= 20 && gasAmount <= 25) {

                double priceAmount = basePrice * 0.92;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount > 25) {

                double priceAmount = basePrice * 0.90;

                cout << priceAmount << " lv.";
            }
        }
    }
    else if (gasType == "Gasoline") {
        if (yesno == "Yes") {

            double discountPrice = gasAmount * 0.18;
            double basePrice = gasAmount * 2.22;

            if (gasAmount < 20) {

                double priceAmount = basePrice - discountPrice;
                
                cout << priceAmount << " lv.";
            }
            else if (gasAmount >= 20 && gasAmount <= 25) {

                double priceAmount = (basePrice - discountPrice) * 0.92;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount > 25) {

                double priceAmount = (basePrice - discountPrice) * 0.90;

                cout << priceAmount << " lv.";
            }
        }
        else if (yesno == "No") {

            double basePrice = gasAmount * 2.22;

            if (gasAmount < 20) {
                
                double priceAmount = basePrice;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount >= 20 && gasAmount <= 25) {

                double priceAmount = basePrice * 0.92;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount > 25) {

                double priceAmount = basePrice * 0.90;

                cout << priceAmount << " lv.";
            }
        }
    }
    else if (gasType == "Diesel") {
        if (yesno == "Yes") {

            double discountPrice = gasAmount * 0.12;
            double basePrice = gasAmount * 2.33;

            if (gasAmount < 20) {

                double priceAmount = basePrice - discountPrice;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount >= 20 && gasAmount <= 25) {

                double priceAmount = (basePrice - discountPrice) * 0.92;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount > 25) {

                double priceAmount = (basePrice - discountPrice) * 0.90;

                cout << priceAmount << " lv.";
            }
        }
        else if (yesno == "No") {

            double basePrice = gasAmount * 2.33;

            if (gasAmount < 20) {
                
                double priceAmount = basePrice;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount >= 20 && gasAmount <= 25) {

                double priceAmount = basePrice * 0.92;

                cout << priceAmount << " lv.";
            }
            else if (gasAmount > 25) {

                double priceAmount = basePrice * 0.90;

                cout << priceAmount << " lv.";
            }
        }
    }
}

