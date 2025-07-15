#include <iostream>
#include <string>

int main(){

    int choice;

    std::cout << "Geometry Calculator" << std::endl;
    std::cout << "\t1. Calculate the Area of a Circle" << std::endl;
    std::cout << "\t2. Calculate the Area of a Rectangle" << std::endl;
    std::cout << "\t3. Calculate the Area of a Triangle" << std::endl;
    std::cout << "\t4. Quit" << std::endl;
    std::cout << "\tEnter your choice (1-4): ";

    std::cin >> choice;

    if (choice < 1 || choice > 4){
        std::cout << "Invalid option." << std::endl;
    }
    switch (choice)
    {
        case 1:
            {
            float radius;
            float pi = 3.14159;
            std::cout << "Please enter in the radius of the circle: ";
            std::cin >> radius;
            if (radius < 0){
                std::cout << "Invalid measurement option." << std::endl;
            }
            else {
            float area = pi * radius * radius;
            std::cout << "The area of the circle is: " << area << std::endl;
            }
            break;
            }

        case 2:
            {
            float length;
            float width;
            std::cout << "Please enter in the length of the rectangle: ";
            std::cin >> length;
            std::cout << "Please enter in the width of the rectangle: ";
            std::cin >> width;

            if (length < 0 || width < 0){
                std::cout << "Invalid measurement option." << std::endl;
            }
            else{
            float area = length * width;
            std::cout << "The area of the rectangle is: " << area << std::endl;
            }
            break;
            }

        case 3:
            {
            float base;
            float height;
            std::cout << "Please enter in the base of the triangle: ";
            std::cin >> base;
            std::cout << "Please enter in the height of the triangle: ";
            std::cin >> height;

            if (height < 0 || base < 0){
                std::cout << "Invalid measurement option." << std::endl;
            }
            else{
            float area = base * height * 0.5;
            std::cout << "The area of the triangle is: " << area << std::endl;
            }
            break;
            }

        case 4:
            {
            std::cout << "Quitting program, have a nice day!" << std::endl;
            break;
            }
    }


    return 0;
}