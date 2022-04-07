// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on April 2022
// It is leap you

#include <iostream>
#include <string>



int main() {
    // this function tells you if its a leap year.
    std::string YEAR_STRING;
    int YEAR;

    std::cout << "Is it a leap year";
    // input
    std::cout << "" << std::endl;
    std::cout << "enter year: ";
    std::cin >> YEAR_STRING;

    // process
    try {
        YEAR = std::stoi(YEAR_STRING);
        if (YEAR % 4 == 0) {
            if  (YEAR % 100 == 0) {
                if (YEAR % 400 == 0) {
                } else {
                    std::cout << "it is not a leap year."
                    << std::endl;
                }
            } else {
                std::cout << "it is a leap year."
                << std::endl;
            }
        } else {
            std::cout << "it is not a leap year."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid year entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
