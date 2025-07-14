#include <iostream>

int main(){

    float weight;
    float distance;
    std::cout << "Please enter in the package weight (kg): ";
    std::cin >> weight;
    std::cout << "Please enter in the shipping distance in miles: ";
    std::cin >> distance;

    if (weight < 0 || weight > 20){
        std::cout << "Invalid weight option." << std::endl;
    }
    else if (distance < 10 || distance > 3000){
        std::cout << "Invalid distance option." << std::endl;
    }
    else if (weight <= 2){
        float charge = 1.10 * distance;
        std::cout << "Shipping charge: $" << charge << std::endl;
    }
    else if (weight > 2 && weight <= 6){
        float charge = 2.20 * distance;
        std::cout << "Shipping charge: $" << charge << std::endl;
    }
    else if (weight > 6 && weight <= 10){
        float charge = 3.70 * distance;
        std::cout << "Shipping charge: $" << charge << std::endl;
    }
    else if (weight > 10 && weight <= 20){
        float charge = 4.80 * distance;
        std::cout << "Shipping charge: $" << charge << std::endl;
    }

    return 0;
}