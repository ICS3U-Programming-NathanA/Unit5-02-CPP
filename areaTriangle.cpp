// Copyright (c) 2022 Nathan Araujo All rights reserved.
// .
// Created by: Nathan Araujo
// Date: Nov.24, 2022
// This program calculates the area of a triangle in cm

#include <iostream>
#include <string>
#include <cmath>

// Function to calculate the area of a triangle
void calcArea(float base, float height) {
    float area;
    // Calculates the area of the triangle
    area = (base * height) / 2;

    // rounds to 2 decimals
    area = ceil(area * 100.0) / 100.0;

    // Displays the area of the triangle
    std::cout << "The area is " << area << "cm^2\n";
}

int main() {
    // declares variables for this scope
    float base, height;
    std::string baseStr, heightStr;

    // Asks the user for the base of the triangle
    std::cout << "Enter the base of the triangle in cm: ";
    std::cin >> baseStr;

    // Asks the user for the height of the triangle
    std::cout << "Enter the height of the triangle in cm: ";
    std::cin >> heightStr;

    // Try catch to catch if the user entered a string
    try {
        base = std::stof(baseStr);
        height = std::stof(heightStr);

        // Calls the calcArea(base, height) function
        calcArea(base, height);
    } catch (...) {
        std::cout << "You must enter a number.\n";
    }
}
