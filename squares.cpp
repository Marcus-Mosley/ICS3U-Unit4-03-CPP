// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program finds the sqaures of all natural numbers preceding the
//     number inputted by the user

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // This function finds the sqaures of all natural numbers preceding the
    //     number inputted by the user
    std::string natural_string;
    int counter;
    int square;
    int natural_integer;

    // Input
    counter = 0;
    square = 0;
    std::cout << "Enter a natural number (To Find Squares 0 to N): ";
    std::cin >> natural_string;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        natural_integer = std::stoi(natural_string);
        if (natural_integer <= 0) {
            std::cout << "You have not inputted a positive number, please"
                         " input a positive number!" << std::endl;
        } else {
            for (counter = 0; counter <= natural_integer; counter++) {
                square = pow(counter, 2);
                std::cout << "The Sqaure of "
                << counter << " is " << square << "!" << std::endl;
            }
        }
    } catch (std::invalid_argument) {
    std::cout << "You have not inputted an integer, please input an integer"
                 " (natural number)!" << std::endl;
    }
}
