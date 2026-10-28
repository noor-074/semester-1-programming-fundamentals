#include <iostream>
using namespace std;

int main() {
    double distance, efficiency, pricePerLiter;

    // Get inputs from the user
    cout << "Enter total trip distance (km): ";
    cin >> distance;

    cout << "Enter car fuel efficiency (km per liter): ";
    cin >> efficiency;

    cout << "Enter fuel price per liter ($): ";
    cin >> pricePerLiter;

    // Calculations
    double totalFuel = distance / efficiency;
    double totalCost = totalFuel * pricePerLiter;

    // Show the results
    cout << "\n--- TRIP COST SUMMARY ---\n";
    cout << "Fuel needed : " << totalFuel << " liters\n";
    cout << "Total cost  : $" << totalCost << endl;

    return 0;
}