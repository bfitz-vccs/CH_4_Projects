#include <iostream>

int main(){

    int month;
    int year;
    int days;

    std::cout << "Enter a month (1-12): ";
    std::cin >> month;
    std::cout << "Enter a year: ";
    std::cin >> year;
    
    if (month > 12 || month < 1){
        std::cout << "Invalid month option." << std::endl;
    }

    switch (month){
        case 1: 
            std::cout << 31 << " days" << std::endl;
            break;
        case 2:
            if (year % 100 == 0 && year % 400 == 0){
                std::cout << 29 << " days" << std::endl;
            }
            else if (year % 100 != 0 && year % 4 == 0){
                std::cout << 29 << " days" << std::endl;
            }
            else{
                std::cout << 28 << " days" << std::endl;
            }
            break;
        case 3:
            std::cout << 31 << " days" << std::endl;
            break;
        case 4:
            std::cout << 30 << " days" << std::endl;
            break;
        case 5:
            std::cout << 31 << " days" << std::endl;
            break;
        case 6:
            std::cout << 30 << " days" << std::endl;
            break;
        case 7:
            std::cout << 31 << " days" << std::endl;
            break;
        case 8:
            std::cout << 31 << " days" << std::endl;
            break;
        case 9:
            std::cout << 30 << " days" << std::endl;
            break;
        case 10:
            std::cout << 31 << " days" << std::endl;
            break;
        case 11:
            std::cout << 30 << " days" << std::endl;
            break;
        case 12:
            std::cout << 31 << " days" << std::endl;
            break;
    }

    return 0;
}