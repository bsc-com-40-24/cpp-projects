#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

void showMenu() {
    std::cout << "\n--- Area Calculator ---\n";
    std::cout << "1. Calculate the area of a square\n";
    std::cout << "2. Calculate the area of a triangle\n";
    std::cout << "3. Calculate the area of a circle\n";
    std::cout << "4. Quit\n";
    std::cout << "Selection: ";
}

int main() {
    int choice = 0;

    while (choice != 4) {
        showMenu();
        std::cin >> choice;

        if (choice == 1) {
            double side;
            std::cout << "Enter side length: ";
            std::cin >> side;
            shapes::Square mySquare(side);
            std::cout << "Area: " << Area::calculateSquareArea(mySquare) << std::endl;
        } 
        else if (choice == 2) {
            double b, h;
            std::cout << "Enter base: ";
            std::cin >> b;
            std::cout << "Enter height: ";
            std::cin >> h;
            shapes::Triangle myTriangle(b, h);
            std::cout << "Area: " << Area::calculateTriangleArea(myTriangle) << std::endl;
        } 
        else if (choice == 3) {
            double r;
            std::cout << "Enter radius: ";
            std::cin >> r;
            shapes::Circle myCircle(r);
            std::cout << "Area: " << Area::calculateCircleArea(myCircle) << std::endl;
        } 
        else if (choice == 4) {
            std::cout << "Exiting program..." << std::endl;
        } 
        else {
            std::cout << "Invalid selection. Try again." << std::endl;
        }
    }

    return 0;
}