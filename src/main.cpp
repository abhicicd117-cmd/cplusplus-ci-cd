#include <iostream>
#include "fare.hpp"

int main()
{
    int distance;
    int trainType;

    std::cout << "Enter travel distance (km): ";
    std::cin >> distance;

    showMenu();
    std::cout << "Choose train type: ";
    std::cin >> trainType;

    double fare = calculateFare(distance, trainType);
    displayFare(distance, trainType, fare);

    return 0;
}
