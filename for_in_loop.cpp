// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: December 2019
// This program finds the smallest number from a list

#include <time.h>
#include <iostream>
#include <array>
#include <fstream>


template<size_t N>
int FindMin(std::array<int, N> listOfNumbers) {
    // this functions finds the smallest number
    int smallestNum = 100;

    // process
    for (int counter : listOfNumbers) {
        if (smallestNum > counter) {
            smallestNum = counter; }
    }
    return smallestNum;
}

main() {
    // this function shows the smallest number
    std::array<int, 10> randomNumbers;
    int smallest;
    int num;

    // initialize random seed:
    unsigned int seed = time(NULL);

    // output
    std::cout << "Let's find the smallest number." << std::endl;

    // process
    for (int counter = 0; counter < 10; counter++) {
        num = rand_r(&seed) % 100 + 1;
        std::cout << num << std::endl;
        randomNumbers[counter] = num; }

    // call function
    smallest = FindMin(randomNumbers);

    // output
    std::cout << std::endl;
    std::cout << "The smallest number from this list is: "
              << smallest << std::endl;
}
