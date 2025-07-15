#include <iostream>
#include <iomanip>

int main(){

    float weight;
    int distance;
    std::cout << std::setprecision(2) << std::fixed;
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
        if (distance % 500 == 0){
            float charge = 1.10 * (distance / 500);
            std::cout << "Shipping charge: $" << charge << std::endl;
        }
        else{
            float charge = 1.10 * ((distance / 500) + 1);
            std::cout << "Shipping charge: $" << charge << std::endl;
        }
    }

    else if (weight > 2 && weight <= 6){
        if (distance % 500 == 0){
            float charge = 2.20 * (distance / 500);
            std::cout << "Shipping charge: $" << charge << std::endl;
        }
        else{
            float charge = 2.20 * ((distance / 500) + 1);
            std::cout << "Shipping charge: $" << charge << std::endl;
        }
    }

    else if (weight > 6 && weight <= 10){
        if (distance % 500 == 0){
            float charge = 3.70 * (distance / 500);
            std::cout << "Shipping charge: $" << charge << std::endl;
        }
        else{
            float charge = 3.70 * ((distance / 500) + 1);
            std::cout << "Shipping charge: $" << charge << std::endl;
        }
    }

    else if (weight > 10 && weight <= 20){
        if (distance % 500 == 0){
            float charge = 4.80 * (distance / 500);
            std::cout << "Shipping charge: $" << charge << std::endl;
        }
        else{
            float charge = 4.80 * ((distance / 500) + 1);
            std::cout << "Shipping charge: $" << charge << std::endl;
        }
    }

    return 0;
}