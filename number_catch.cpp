// Copyright (c) St. Mother Teresa HS All rights reserved.
//
// Created by: Dahrio Francois
// Created on: December 2020
// this program is a number guessing game
//     that uses try statements


#include <iostream>
#include <string>
#include <random>

int main() {
    int someRandomNumber;


    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 50);  // [1, 20]
    someRandomNumber = idist(rgen);

    // this function uses a try statement to catch a non integer
    std::string integerAsString;
    int integerAsNumber;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> integerAsString;

    // process & output
    try {
        integerAsNumber = std::stoi(integerAsString);
        std::cout << "You entered an integer correctly!\n";
    if (integerAsNumber < someRandomNumber) {
            std::cout << "Incorrect. Too low. \n";
            std::cout << "The correct number is: \n";
            std::cout << someRandomNumber;

    } else if (integerAsNumber > someRandomNumber) {
            std::cout << "Incorrect. Too high.\n";
            std::cout << "The correct number is: \n";
            std::cout << someRandomNumber;

    } else {
            std::cout << "Correct!";
    }
    }
    catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }
}
