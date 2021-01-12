// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by: Donggeun Lim
// Created on: Jan 2021
// This program rounds number


#include <iostream>
#include <cmath>


float Rounding(float &decimal, int digit) {
    decimal = decimal * pow(10, digit);
    decimal = decimal + 0.5;
    decimal = int(decimal);
    decimal = decimal / pow(10, digit);
}

main() {
    // this function rounds a number by the user to the digit the user wants

    float decimal;
    int digit;

    // input
    std::cout << "Enter the number you want to round: ";
    std::cin >> decimal;
    std::cout << "Enter how many decimal places you want to round by: ";
    std::cin >> digit;
    Rounding(decimal, digit);
    // output
    std::cout << "The rounded number is " << decimal;
}
