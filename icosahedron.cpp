// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: September 2019
// This is a program which can find the volume of an icosahedron.

#include <iostream>
#include <cmath>

int main() {
    int length;
    int volume;

// Input
    std::cout << "Enter edge length of the icosahedron (cm): ";
    std::cin >> length;

// Process
    volume = 5*(3+sqrt(5))/12*pow(length, 3);

// Output
    std::cout << "" << std::endl;
    std::cout << "The volume is around:" << volume << "cm^3" << std::endl;
}
