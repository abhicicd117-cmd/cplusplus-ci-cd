#include <iostream>
#include "fare.hpp"

void showMenu()
{
    std::cout << "\n--- Railway Fare Calculator ---\n";
    std::cout << "1. Passenger Train\n";
    std::cout << "2. Express Train\n";
    std::cout << "3. Superfast Train\n";
}

double calculateFare(int distance, int trainType)
{
    double ratePerKm = 0;

    switch (trainType)
    {
        case 1: ratePerKm = 1.0; break;
        case 2: ratePerKm = 1.5; break;
        case 3: ratePerKm = 2.0; break;
        default: ratePerKm = 0;
    }

    return distance * ratePerKm;
}

void displayFare(int distance, int trainType, double fare)
{
    std::cout << "\nDistance: " << distance << " km";

    if (trainType == 1)
        std::cout << "\nTrain Type: Passenger";
    else if (trainType == 2)
        std::cout << "\nTrain Type: Express";
    else if (trainType == 3)
        std::cout << "\nTrain Type: Superfast";

    std::cout << "\nTotal Fare: ₹" << fare << std::endl;
}
